import java.util.Scanner;

class FirstLastName {
    public static void main (String args[]) {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter first name and last name:");
        String firstName = sc.next();
        String lastName = sc.next();
        System.out.println("Full Name: " + firstName + " " + lastName);
    }
}