import java.util.Scanner;

class LinearSearch {
  public static void main (String args[]) {
    int arr[] = {10, 23, 44, 52, 23, 4};
    Scanner sc = new Scanner (System.in);
    System.out.println("Enter number to be searched:");
    int num = sc.nextInt();
    for(int i = 0; i < arr.length; i++) {
      if (num == arr[i]) {
        System.out.println(num + " was found at location " + (i+1));
      }
    }
  }
}