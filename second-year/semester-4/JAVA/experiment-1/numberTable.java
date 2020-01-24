import java.util.Scanner;

class numberTable {
  public static void main(String args[]) {
    Scanner sc = new Scanner (System.in);
    System.out.println("Enter a number to display it's number table:");
    int n = sc.nextInt();
    for(int i = 0; i < 10; i++) {
      System.out.println(n + " * " + i + " = " + n*i);
    }
  }
}