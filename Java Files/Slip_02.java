// Q1 Write a program to accept ‘n’ integers from the user & store them in an Array List collection. Display the elements of Array List.
import java.util.ArrayList;
import java.util.Scanner;

class MyMain {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Ask how many numbers
        System.out.print("How many numbers? ");
        int n = sc.nextInt();

        // Create ArrayList
        ArrayList<Integer> myArray = new ArrayList<>();

        // Accept n integers from user
        System.out.println("Enter " + n + " integers:");
        for (int i = 0; i < n; i++) {
            int num = sc.nextInt();
            myArray.add(num);
        }

        // Display elements of ArrayList
        System.out.println("ArrayList elements: " + myArray);

        sc.close();
    }
}



x------x


// Q2
import java.util.*;

class MyNumber{
    private int num;

    MyNumber(){
        this.num = 0;
    }
    MyNumber(int num){
        this.num = num;
    }
    public void isPositive(){
        if(n > 0){
            System.out.println("The number " + n + " is Positive");
        }
    }

    public void isNegative(){
        if(n < 0){
            System.out.println("The number " + n + " is Negative!!");
        }
    }
    public void isOdd(){
            if(n % 2 != 0){
        System.out.println("The number " + n + " is Odd");
        }
    }

    public void isEven(){
        if(n % 2 == 0){
            System.out.println("The number " + n + " is Even");
        }
    }
}

public class Main{
    public static void main(String[] args) {
        System.out.println("Enter a number ?");
        int n = Integer.parseInt(args[0]); // convert command line arg to int

        MyNumber num1 = new MyNumber(n);

        num1.isPositive();
        num1.isNegative();
        num1.isOdd();
        num1.isEven();
    }
}