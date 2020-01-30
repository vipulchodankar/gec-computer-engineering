//Find the area and perimeter of a circle taking a value of radius from user
//  If rad <= 0 then print message to enter non zero postitive number

import java.util.Scanner;
import java.lang.Math;

class Circle {
    public static void main (String args[]) {
        Scanner sc = new Scanner (System.in);
        // try {
        //     System.out.println("Enter the value of radius:");
        //     double radius = sc.nextDouble();
        //     if(radius <= 0) {
        //         throw 0;
        //     }
        // } catch (int e) {
        //     System.out.println(e);
        // }

        System.out.println("Enter the value of radius:");
        double radius = sc.nextDouble();

        while(radius <= 0) {
            System.out.println("Enter non zero postitive number");
            radius = sc.nextDouble();
        }

        double perimeter = 2 * Math.PI * radius;
        double area = Math.PI * radius * radius;
        System.out.println("Area of circle = " + area + " sq. units\nPerimeter of circle = " + perimeter + " units");
    }
}