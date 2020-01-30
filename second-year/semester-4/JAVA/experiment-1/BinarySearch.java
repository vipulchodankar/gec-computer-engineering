import java.util.Scanner;

class BinarySearch {
  public static void main (String args[]) {
    int arr[] = {-21, -10, 4, 0, 1, 10, 23, 44, 52, 69, 404};

    Scanner sc = new Scanner (System.in);

    System.out.println("Enter number to be searched:");
    int num = sc.nextInt();

    int low = 0, high = arr.length - 1, mid = (low + high) / 2;

    while(low < high) {
      mid = (low + high) / 2;

      if(arr[mid] == num) {
        System.out.println(num + " found at location " + (mid+1));
        System.exit(1);
      }

      else if (arr[mid] > num)
        high = mid - 1;

      else 
        low = mid + 1;
    }
    System.out.println(num + " was not found.");
  }
}