/* Create a flat file "StudentsNames.txt", the file contains - names of students, where each student name 
    is listed using first name and last name. Read "StudentsNames.txt" and display names of students.
    Search for a particular student name.
    Allow update of student name. (Not using file handling) */

import java.util.Scanner;
import java.lang.StringBuffer;
import java.io.FileWriter;  
import java.io.IOException;
import java.io.BufferedReader;
import java.io.FileReader;
    
class Students {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner (System.in);
        
        System.out.print("Enter number of students: ");
        int num = sc.nextInt();

        try {
            FileWriter fw = new FileWriter("StudentNames.txt");
            for(int i = 0; i < num; i ++) {
                System.out.print("Enter Student " + (i+1) + "'s First Name: ");
                StringBuffer firstName = new StringBuffer(sc.next());
                
                System.out.print("Enter Student " + (i+1) + "'s Last Name: ");
                StringBuffer lastName = new StringBuffer(sc.next());

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
            System.out.println("Enter student name to be searched");
            sc.nextLine();
            StringBuffer key = new StringBuffer(sc.nextLine());

            BufferedReader br = new BufferedReader (new FileReader("StudentNames.txt"));
            try {
                StringBuffer name = new StringBuffer(br.readLine());
                while(name!= null){
                    if(key.compareTo(name) == 0) {
                        System.out.println("Found: " + name);
                        System.out.println("Enter new name: ");
                        key.replace(0, key.length(), sc.nextLine());
                        System.out.println("Updated!");
                    }
                    name.replace(0, name.length(), br.readLine());
                }
            }
            catch(NullPointerException e) { 
                System.out.print("NullPointerException Caught"); 
            } 

            br.close();
        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }

        sc.close();
    }
}