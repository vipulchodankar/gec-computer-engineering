import java.util.*;

interface Display {
	void display();
}

class Person implements Display{
	String name;
	int age;

	Person() {
		name = "Default Name";
		age = 18;
	}

	public void display() {
		System.out.println("Name is " + name);
		System.out.println("Age is " + age);
	}
}

class Student extends Person {
	String rollNo, branch;

	Student() {
		rollNo = "181105000";
		branch = "Default Branch";
	}

	public void display() {
		System.out.println("Student:");
		super.display();
		System.out.println("Roll no is " + rollNo);
		System.out.println("Branch is " + branch);
	}
}

class Employee extends Person {
	int ecNo;
	Date doj;

	Employee() {
		ecNo = 0;
		doj = new Date(2000 - 1901, 0, 1);
	}

	public void display() {
		super.display();
		System.out.println("Ec number is " + ecNo);
		System.out.println("Date of joining is " + doj);
	}
}

class Staff extends Employee {
	public void display() {
		System.out.println("Staff: ");
		super.display();
	}
}

class Faculty extends Employee {
	String designation;

	Faculty() {
		designation = "Default Designation";
	}

	public void display() {
		System.out.println("Faculty");
		super.display();
	}

}

public class one {
	public static void main(String[] args) {
		Person p = new Person();
		Student s = new Student();
		Employee e = new Employee();
		Staff st = new Staff();
		Faculty f = new Faculty();
		
		p.display();
		System.out.println("");
		
		s.display();
		System.out.println("");
		
		e.display();
		System.out.println("");
		
		st.display();
		System.out.println("");
		
		f.display();
	}
}
