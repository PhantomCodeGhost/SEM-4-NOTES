// Q1. Write a program to accept the 'n' different numbers from user and store it in array. Also print the sum of elements of the array. 

import java.util.Scanner;
public class Q2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("How many numbers?");
        int n = sc.nextInt();

        int[] arr = new int[n];
        int sum = 0;

        System.out.println("Enter " + n + "numbers : ");
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
            sum += arr[i];
        }
        System.out.println("The sum of array : " + sum);
        sc.close();


    }
}

// Q2 
import java.util.Scanner;
import java.io.*;

public class Q2{
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter source Filename : ");
        String sourceFile = sc.nextLine();

        System.out.print("Enter destination Filename : ");
        String destinationFile = sc.nextLine();

        FileReader reader = new FileReader(sourceFile);
        FileWriter writer = new FileWriter(destinationFile);

        int character;
        while ((character = reader.read()) != -1){
            writer.write(Character.toUpperCase((char) character));
        }

        reader.close();
        writer.close();
        sc.close();

        System.out.println("File copied SucessFully!!! in Uppercase");
    }

}
