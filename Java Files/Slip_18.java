/* Q1. Write a program to print the factors of a number. Accept a number using command line argument. */
import java.util.*;
class Main {
    public static void main(String[] args) {
        
        int n = Integer.parseInt(args[0]);
        System.out.println("Factorial of " + n);
        for(int i = 1; i<=n; i++){
            if(n % i == 0){
                System.out.println(i);
            }
        }
    }
}

x------x

// Q2 Write a program to read the contents of “abc.txt” file. Display the contents of file in uppercase as output.

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