/* Write a program that describes a class Person. 
It should have instance variables to record name, age and salary. 
Create a person object and save the person transaction in employee.txt */

import java.io.FileWriter;  
import java.io.IOException;
import java.util.Scanner;

class Person {
    private String name;
    private int age;
    private double salary;

    public static void main (String args[]) throws IOException {
        Scanner sc = new Scanner (System.in); 

        Person personObject = new Person ();
        
        System.out.println("Enter Person's Name:");
        personObject.name = sc.next().trim();

        System.out.println("Enter Person's Age:");
        personObject.age = sc.nextInt();

        System.out.println("Enter Person's Salary");
        personObject.salary = sc.nextDouble();

        try {
            FileWriter fw = new FileWriter("employee.txt");
            fw.write(personObject.name + "," + personObject.age + "," + personObject.salary);
            fw.close();
        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }
    }
}