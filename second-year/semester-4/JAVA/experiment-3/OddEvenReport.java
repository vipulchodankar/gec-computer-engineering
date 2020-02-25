/* Write a program that accepts numbers as command line arguments. 
Create a report (report.txt) reporting if the entered number is even or odd. 
Display the contents of report.txt */

import java.io.FileWriter;  
import java.io.IOException;

class OddEvenReport {
    public static void main(String args[]) throws IOException {
        try {
            FileWriter fw = new FileWriter("report.txt");
            for(int i = 0; i < args.length; i++) {
                if(numberCheck(args[i])) {
                    if(Integer.parseInt(args[i]) % 2 == 0) {
                        fw.write(args[i] + " is even\n");
                        System.out.println(args[i] + " is even");
                    } else {
                        fw.write(args[i] + " is odd\n");
                        System.out.println(args[i] + " is odd");
                    }
                } else {
                    System.out.println("* " + args[i] + " is not a number, skipping. *");
                }
            }
            fw.close();
        }  catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }
    }

    public static Boolean numberCheck(String str) {
        try {  
            Double.parseDouble(str);  
            return true; // Return true if number can be parsed to double
        } catch(NumberFormatException e){  
            return false;  // Return true if number can't be parsed to double; is a string.
        }  
    }
}