// Accept value n from user and consider first n even numbers and calculate the sum of all numbers divisible by 3 and print sum
//  IF n = 5, then 2, 4, 6, 8 ,10. 
import java.util.Scanner;

class SumB {
    public static void main (String args[]) {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter value of n:");
        int n = sc.nextInt();
        int arr[] = new int[n];

        for(int i = 0, j = 0; 1 == 1; i++ ) {
            if(i % 2 == 0) {
                arr[j] = i;
                j++;
                if(j == n)
                    break;
            }
        }

        int sum = 0;
        for(int i = 0; i < arr.length; i++ ) {
            if(arr[i] % 3 == 0)
                sum += arr[i];
        }

        System.out.println("Sum of even numbers divisible by 3 upto " + n + " = " + sum);
    }
}