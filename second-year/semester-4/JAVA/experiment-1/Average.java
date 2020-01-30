import java.util.Scanner;

class Average {
  public static void main(String args[]) {
    Scanner sc = new Scanner (System.in);
    System.out.println("Enter number of numbers:");
    int n = sc.nextInt();
    int num[] = new int[n];
    for(int i = 0; i < n; i++) {
      System.out.println("Enter #" + (i+1) + " :");
      num[i] = sc.nextInt();
    }
    int sum = 0;
    for(int i = 0; i < n ;i++) {
      sum += num[i];
    }
    int average = sum / n;
    System.out.println("Average = " + average );
  }
}