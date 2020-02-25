/* WAP to manage people in a department, the people associated with 
    the department comprise of teachers or students. 
    Teacher type objects are described using employeeId, employeeName 
    and employeeSalary attributes.
    Student objects are described using rollNumber and studentName attributes.
    Write a program to enable I/O of random objects of Teacher or Student type.
    (Please note: A single dynamic  array manages both teachers and students) */

import java.util.ArrayList;
import java.util.Scanner;

public class Department {
    public static void main(String args[]) {
        ArrayList<Object> arr = new ArrayList<Object>(5);
        Scanner sc = new Scanner(System.in);

        System.out.println("How many people do you wish to add?");
        int numberOfPeople = sc.nextInt();

        String typeOfPerson;

        for (int i = 0; i < numberOfPeople; i++) {
            System.out.println("\nDo you wish to add a teacher or student?");
            typeOfPerson = sc.next().trim().toLowerCase();

            switch (typeOfPerson.charAt(0)) {
                case 't':
                    System.out.println("\nYou chose to enter a Teacher's details");

                    System.out.println("Enter Teacher's Name:");
                    String tname = sc.next().trim();

                    System.out.println("Enter Teacher's ID:");
                    int id = sc.nextInt();

                    System.out.println("Enter Teacher's Salary:");
                    double salary = sc.nextDouble();

                    arr.add(new Teacher(tname, id, salary));
                    break;

                case 's':
                    System.out.println("\nYou chose to enter a Student's details");

                    System.out.println("Enter Student's Name:");
                    String sname = sc.next().trim();

                    System.out.println("Enter Student's Roll Number");
                    int number = sc.nextInt();

                    arr.add(new Student(sname, number));
                    break;

                default:
                    System.out.println("Choose either teacher or student please.");
                    break;
            }
        }

        display(arr);

        sc.close();
    }

    public static void display(ArrayList<Object> arr) {
        for (Object obj : arr) {
            if (obj.getClass() == Teacher.class) {
                System.out.println("\nObject of type Teacher");
                Teacher tempT = (Teacher) obj;
                tempT.display();
            } else if (obj.getClass() == Student.class) {
                System.out.println("\nObject of type Student");
                Student tempS = (Student) obj;
                tempS.display();
            }
        }
    }
}

class Teacher {
    String employeeName;
    int employeeId;
    double employeeSalary;

    Teacher(String name, int id, double salary) {
        this.employeeName = name;
        this.employeeId = id;
        this.employeeSalary = salary;
    }

    void display() {
        System.out.println("Teacher name: " + this.employeeName);
        System.out.println("Teacher id: " + this.employeeId);
        System.out.println("Teacher salary: " + this.employeeSalary);
    }
}

class Student {
    String studentName;
    int rollNumber;

    Student(String name, int number) {
        this.studentName = name;
        this.rollNumber = number;
    }

    void display() {
        System.out.println("Student name: " + this.studentName);
        System.out.println("Student id: " + this.rollNumber);
    }
}