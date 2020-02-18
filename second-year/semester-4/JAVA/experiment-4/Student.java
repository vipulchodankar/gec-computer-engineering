/*  Create a flat file “StudentNames.txt” containing  the list of student names. 
Each student name has first name and last name. 
Display total  number of student names in the file. 
Also display the number of students having same first name. 
Also, display the number of students having same first name and lat name. 
Display the name of the student having the longest name.  */

import java.util.Scanner;
import java.io.FileWriter;  
import java.io.IOException;
import java.io.BufferedReader;
import java.io.FileReader;

class Student {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner (System.in);
        System.out.print("Enter number of students: ");
        int num = sc.nextInt();
        try {
            FileWriter fw = new FileWriter("StudentNames.txt");
            for(int i = 0; i < num; i ++) {
                System.out.print("Enter Student " + (i+1) + "'s First Name: ");
                String firstName = sc.next();
                System.out.print("Enter Student " + (i+1) + "'s Last Name: ");
                String lastName = sc.next();
                fw.write(firstName + " " + lastName + "\n");
            }
            fw.close();
        }  catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }
        // End of file writing
        System.out.println("\n - End of writing file - ");
        try {
            BufferedReader br = new BufferedReader (new FileReader("StudentNames.txt"));
            String name = br.readLine();
            int numberOfStudents = 0;
            while(name!= null){
                numberOfStudents++;
                // System.out.println("Found: " + name);
                name = br.readLine();
            }
            System.out.println("Total Number of Students: " + numberOfStudents);
            br.close();

            br = new BufferedReader (new FileReader("StudentNames.txt"));
            String names[] = new String[numberOfStudents+1];
            int i = 0;
            names[i]=br.readLine().trim();
            while(names[i]!= null){
                i++;
                names[i] = br.readLine();
            }

            // Code to get longest name
            {
                String longestName = names[0];
                for(int j = 0; j < numberOfStudents; j++) {
                    if(longestName.length() < names[j].length())
                        longestName = names[j];
                }
                System.out.println("The longest name: " + longestName);
            }

            // Code to check for same full name
            {
                int numberOfStudentsHavingSameFullName = 0;
                for(int j = 0; j < numberOfStudents; j++) {
                    for(int k = j + 1; k < numberOfStudents; k++) {
                        if(names[j].equalsIgnoreCase(names[k])) {
                            // System.out.println("Full Name check: " + names[j] + " " + names[k]);
                            numberOfStudentsHavingSameFullName++;
                        }
                    }
                }
                System.out.println("Number of students with same full name: " + numberOfStudentsHavingSameFullName);
            }

            // Code to check for same first name
            {
                int numberOfStudentsHavingSameFirstName = 0;
                String firstName1[] = new String[2];
                String firstName2[] = new String[2];
                for(int j = 0; j < numberOfStudents; j++) {
                    firstName1 = names[j].split(" ", 2);
                    // if(j > 0 && firstName1[j].equalsIgnoreCase(firstName1[j-1]));
                    for(int k = j + 1; k < numberOfStudents; k++) {
                        firstName2 = names[k].split(" ", 2);
                        if(firstName1[0].equalsIgnoreCase(firstName2[0])) {
                            // System.out.println("First Name check: " + firstName1[0] + " " + firstName2[0]);
                            numberOfStudentsHavingSameFirstName++;
                        }
                    }
                }
                System.out.println("Number of students with same first name: " + numberOfStudentsHavingSameFirstName);
            }
            

            br.close();
        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }
    }
}