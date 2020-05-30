import java.util.*;

public class one {
	public static void main(String[] args) {
		Clerk clerkObject = new Clerk();
		clerkObject.withdraw(500);
		clerkObject.deposit(2000);
		clerkObject.withdraw(1000);
		clerkObject.withdraw(50);
		clerkObject.deposit(5000);
	}
}

class Account {
	float balance;
	boolean open;

	Account() {
		balance = 1000;
		open = true;
	}

	boolean isOpen() {
		return open;
	}

	synchronized void modifyBalance(float f) {
		balance += f;
	}

	synchronized void withdraw(float workingVal) {
		if (isOpen()) {
			if (workingVal < balance) {
				System.out.println("Withdrawing " + workingVal);
				modifyBalance(-workingVal);
			} else {
				System.out.println("Insufficient funds!");
			}
		} else {
			System.out.println("Account is closed.");
		}
	}

	synchronized void deposit(float workingVal) {
		if (isOpen()) {
			System.out.println("Depositing " + workingVal);
			modifyBalance(workingVal);
		} else {
			System.out.println("Account is closed.");
		}
	}

}

class Clerk {
	Account accountObject = new Account();

	class Deposit extends Thread {
		float workingVal;

		Deposit(float w) {
			workingVal = w;
		}

		public void run() {
			accountObject.deposit(workingVal);
		}
	}

	class Withdraw extends Thread {
		float workingVal;

		Withdraw(float w) {
			workingVal = w;
		}

		public void run() {
			accountObject.withdraw(workingVal);
		}
	}

	boolean isOpen() {
		return accountObject.isOpen();
	}

	void withdraw(float f) {
		Withdraw w = new Withdraw(f);
		w.start();
	}

	void deposit(float f) {
		Deposit d = new Deposit(f);
		d.start();
	}

	void close() {
		accountObject.open = false;
	}

	void open() {
		accountObject.open = true;
	}
}
