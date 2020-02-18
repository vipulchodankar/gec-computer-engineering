/* Write a Java program to practice using String
class and its methods.*/

import java.util.Scanner;

class StringPractice {
    public static void main (String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        String trimmedString = str.trim();
        String lowerCaseString = trimmedString.toLowerCase();
        String upperCaseString = trimmedString.toUpperCase();
        String concatenatedString = lowerCaseString.concat(upperCaseString);
        
        System.out.println ("Trimmed String: " + trimmedString);
        System.out.println ("Lower Case String: " + lowerCaseString);
        System.out.println ("Upper Case String: " + upperCaseString);
        System.out.println ("Concatenated String: " + concatenatedString);
        System.out.println ("is Lower Case String equal to Upper Case String?: " + (lowerCaseString.equals(upperCaseString)?"Yes":"No"));
    }
}