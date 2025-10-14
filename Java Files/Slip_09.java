Q2


import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class PerfectNumber {
    public static void main(String[] args) throws IOException {
        // Create BufferedReader object
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        
        System.out.print("Enter a number: ");
        int number = Integer.parseInt(reader.readLine());
        
        // Check if number is perfect
        if (isPerfectNumber(number)) {
            System.out.println(number + " is a perfect number.");
        } else {
            System.out.println(number + " is not a perfect number.");
        }
    }
    
    // Method to check if a number is perfect
    public static boolean isPerfectNumber(int num) {
        if (num <= 1) {
            return false;
        }
        
        int sum = 0;
        
        // Find proper divisors and sum them
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        
        // Check if sum equals the original number
        return sum == num;
    }
}