import java.util.Scanner;

public class Matrice{
    public static void main(String[] args) {
        Scanner = new Scanner(System.in);
 
        System.out.print("Enter the number of rows: ");
        int numRows = scanner.nextInt();
        System.out.print("Enter the number of columns: ");
        int numCols = scanner.nextInt();
 
        int[][] twoDArray = new int[numRows][numCols];
 
        int choice;
        do {
            System.out.println("\nMenu:");
            System.out.println("1. Insert an element");
            System.out.println("2. Delete an element");
            System.out.println("3. Display 2D array");
            System.out.println("4. Allocate more memory");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();
 
            switch (choice) {
                case 1:
                    insertElement(twoDArray);
                    break;
                case 2:
                    deleteElement(twoDArray);
                    break;
                case 3:
                    displayArray(twoDArray);
                    break;
                case 4:
                    twoDArray = allocateMemory(twoDArray);
                    break;
                case 5:
                    System.out.println("Exiting the program.");
                    break;
                default:
                    System.out.println("Invalid choice. Please enter a valid option.");
            }
        } while (choice != 5);
        scanner.close();
    }
 
    public static void insertElement(int[][] arr){
        Scanner = new Scanner(System.in);
 
        System.out.print("Enter the row index: ");
        int rowIndex = scanner.nextInt();
        System.out.print("Enter the column index: ");
        int colIndex = scanner.nextInt();
 
        if (rowIndex < 0 || rowIndex >= arr.length || colIndex < 0 || colIndex >= arr[0].length) {
            System.out.println("Invalid indices. Element cannot be inserted");
        }
 
        System.out.print("Enter the element to insert: ");
        int element = scanner.nextInt();
 
        arr[rowIndex][colIndex] = element;
        System.out.println("Element inserted.");
 
        scanner.close();
    }
 
    public static void deleteElement(int[][] arr) {
        Scanner scanner = new Scanner(System.in);
 
        System.out.print("Enter the row index to delete: ");
        int rowIndex = scanner.nextInt();
        System.out.print("Enter the column index to delete: ");
        int colIndex = scanner.nextInt();
 
        if (rowIndex < 0 || rowIndex >= arr.length || colIndex < 0 || colIndex >= arr[0].length) {
            System.out.println("Invalid indices. Element cannot be deleted.");
        }
 
        arr[rowIndex][colIndex] = 0;
        System.out.println("Element deleted.");
 
        scanner.close();
    }
 
    public static void displayArray(int[][] arr) {
        System.out.println("2D Array:");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
 
    public static int[][] allocateMemory(int[][] arr) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter the number of additional rows: ");
            int additionalRows = scanner.nextInt();
            System.out.print("Enter the number of additional columns: ");
            int additionalCols = scanner.nextInt();
 
            int numRows = arr.length + additionalRows;
            int numCols = arr[0].length + additionalCols;
 
            int[][] newArray = new int[numRows][numCols];
           
            for (int i = 0; i < arr.length; i++) {
                System.arraycopy(arr[i], 0, newArray[i], 0, arr[i].length);
            }
            System.out.println("Memory allocated.");
            return newArray;
        }
    }
}

Output:


Sum of upper triangle of a matrix
Print main diagonal elements
 Print even numbers in lower triangle of a matrix
 Maximum, minimum and average elements in a matrix 


 
import java.util.Scanner;
public class Metrics {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int rows = in.nextInt();
        int cols = in.nextInt();
        int[][] arr = new int[rows][cols];
 
        for(int i = 0 ; i < arr.length ; i++){
            for(int j = 0 ; j <arr[i].length ; j++){
                arr[i][j] = in.nextInt();
            }
        }
        int sum = 0;
        int max = arr[0][0];
        int min = arr[0][0];
        for(int i = 0 ; i < arr.length ; i++){
            for(int j = 0 ; j <arr[i].length ; j++){
                if(arr[i][j] > max ){
                    max = arr[i][j];
                }
 
                if(arr[i][j] < min ){
                    min = arr[i][j];
                }
 
                sum += arr[i][j];
            }
        }
        int maindia = maindiagonal(arr);
        int secdia  = secdiagonal(arr);
        int upptri  = upperTriangle(arr);
        int lowtri  = lowerTriangle(arr);
 
        System.out.println(maindia);
        System.out.println(secdia);
        System.out.println(upptri);
        System.out.println(lowtri);
 
        int avg = sum/(rows * cols);
        System.out.println("SUM" + sum);
        System.out.println("AVG" + avg);
        System.out.println("MAX" + max);
        System.out.println("MIN" + min);
        in.close();
    }
    static int maindiagonal(int[][] arr){
        int sum = 0;
        for(int i = 0 ; i <arr.length ; i++){
            sum += arr[i][i];
        }
        return sum;
    }
    static int secdiagonal(int[][] arr){
        int sum = 0;
        for(int i = 0 ; i <arr.length ; i++){
            for(int j = 0 ; j < arr[0].length ; j++){
                sum += arr[i][arr.length - i-1];
            }
        }
        return sum;
    }
    static int upperTriangle(int[][] arr){
        int sum = 0;
        for(int i = 0 ; i <arr.length ; i++){
            for(int j = i ; j<arr[0].length ; j++){
                sum += arr[i][j];
            }
        }
        return sum;
    }
    static int lowerTriangle(int[][] arr){
        int sum = 0;
        for(int i = 0 ; i <arr.length ; i++){
            for(int j = 0 ; j<= i ; j++){
                sum += arr[i][j];
            }
        }
        return sum;
    }
}
