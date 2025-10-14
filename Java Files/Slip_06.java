// Q1

import java.util.Scanner;

public class GreetUser {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Please enter your name: ");
        String userName = scanner.nextLine();
        
        // Directly convert to uppercase in the print statement
        System.out.println("Hello, " + userName.toUpperCase() + ", nice to meet you!");
        
        scanner.close();
    }
}


x------x

// Q2
