abstract class Employee {
	String name, designation;
	float salary;

	abstract void giveRaise(double hike);

	public String getDesignation() {
		return designation;
	}

	public String getName() {
		return name;
	}
}

class Manager extends Employee {
	String project;

	public void setProject(String proj) {
		project = proj;
	}

	public String getProject() {
		return project;
	}

	void giveRaise(double hike) {
		salary += hike * 2;
	}
}

class Worker extends Employee {
	// Worker class from Employee class and override/ overload giveRaise() to offer
	// hike to the worker object.
	void giveRaise(double hike) {
		salary += hike;
	}
}

public class two {
	public static void main(String[] args) {
		Employee[] e = new Employee[10];
		int i;
		for (i = 0; i < 5; i++) {
			e[i] = new Manager();
		}
		for (i = 5; i < 10; i++) {
			e[i] = new Worker();
		}
	}
}
