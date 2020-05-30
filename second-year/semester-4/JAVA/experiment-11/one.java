import java.util.*;
import java.lang.NumberFormatException;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class one {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		FileWriter fw = new FileWriter("Student.dat");

		System.out.println("Enter number of students:");
		int numberOfStudents = sc.nextInt();

		sc.nextLine(); // To read the newline character after the int

		String firstName, lastName;
		int rollNumber;
		float subject1, subject2, average;

		for (int i = 0; i < numberOfStudents; i++) {
			System.out.println("\n- Student number " + (i + 1) + " -");

			System.out.println("Enter first name:");
			firstName = sc.nextLine();

			System.out.println("Enter last name:");
			lastName = sc.nextLine();

			System.out.println("Enter roll number:");
			rollNumber = sc.nextInt();

			System.out.println("Enter subject 1 marks:");
			subject1 = sc.nextFloat();

			System.out.println("Enter subject 2 marks:");
			subject2 = sc.nextFloat();

			sc.nextLine();// To read the newline character after the float
			average = (subject1 + subject2) / 2;

			// Format: Name RollNumber AverageMarks
			fw.write(firstName + " " + lastName + " " + rollNumber + " " + subject1 + " " + average + " ");
		}
		fw.close();
		sc.close();

		// Reading and displaying content of "Student.dat" and writing to
		// "StudentBackup.dat"
		FileReader fr = new FileReader("Student.dat");
		fw = new FileWriter("StudentBackup.dat");

		BufferedReader br = new BufferedReader(fr);
		String temp;

		System.out.println("\nContent of Student.dat:");
		while ((temp = br.readLine()) != null) {
			System.out.println(temp);
			fw.write(temp + " ");
		}

		fw.close();
		fr.close();
	}
}
