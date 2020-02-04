//Consider first n even numbers starting from 0, complete the input and calculate the sum of all numbers divisible by 3 and print sum
//  IF n = 10, then 2, 4, 6, 8, 10
import java.util.Scanner;

class SumA {
    public static void main (String args[]) {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter value of n:");
        int n = sc.nextInt();
        int sum = 0;

        for(int i = 0, j = 0; i <= n; i++ ) {
            if(i % 2 == 0 && i % 3 == 0) {
                sum += i;
            }
        }

        System.out.println("Sum of even numbers divisible by 3 upto " + n + " = " + sum);
    }
}