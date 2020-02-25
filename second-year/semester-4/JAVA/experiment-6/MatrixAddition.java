/*  Accept 2 dynamic matrices from the user, Add them and display
    the sum matrix. */

import java.util.Scanner;

class MatrixAddition {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter the number of rows of Matrix 1:");
        int rows1 = sc.nextInt();

        System.out.println("\nEnter the number of columns of Matrix 1:");
        int columns1 = sc.nextInt();

        double matrix1[][] = new double[rows1][columns1];

        System.out.println("\nEnter the " + (rows1*columns1) + " elements of Matrix 1:");
        for(int i = 0; i < rows1; i++) {
            for(int j = 0; j < columns1; j++) {
                matrix1[i][j] = sc.nextDouble();
            }
        }

        System.out.println("\nEnter the number of rows of Matrix 2:");
        int rows2 = sc.nextInt();

        System.out.println("\nEnter the number of columns of Matrix 2:");
        int columns2 = sc.nextInt();

        if(rows1!=rows2 || columns1!=columns2) {
            System.out.println("\nMatrices of different sizes cannot be added!");
            System.exit(0);
        }

        double matrix2[][] = new double[rows2][columns2];

        System.out.println("\nEnter the " + (rows2*columns2) + " elements of Matrix 1:");
        for(int i = 0; i < rows2; i++) {
            for(int j = 0; j < columns2; j++) {
                matrix2[i][j] = sc.nextDouble();
            }
        }

        double sumMatrix[][] = new double[rows1][columns1];
        for(int i = 0; i < rows1; i++) {
            for(int j = 0; j < columns1; j++) {
                sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        System.out.println("\nResultant Matrix after addition: ");
        for(int i = 0; i < rows1; i++) {
            for(int j = 0; j < columns1; j++) {
                System.out.print(sumMatrix[i][j] + "  ");
            }
            System.out.println("");
        }

        sc.close();
    }
}