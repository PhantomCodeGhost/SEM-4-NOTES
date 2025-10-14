
/* Q1 Write a program to accept a number from the user, if number is zero then throw user defined exception ―Number is 0, otherwise display factorial of a number. */

import java.util.Scanner;
// Custom exception class
class ZeroException extends Exception {
    ZeroException(String msg) {
        super(msg);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        
        try {
            if (num == 0) {
                throw new ZeroException("Number is 0");
            } else {
                // Calculate factorial
                int fact = 1;
                for (int i = 1; i <= num; i++) {
                    fact = fact * i;
                }
                System.out.println("Factorial of " + num + " is: " + fact);
            }
        } catch (ZeroException e) {
            System.out.println("Exception: " + e.getMessage());
        }
        
        sc.close();
    }
}

x-------x

/* Q1.1 Write a program to accept a number from user. Check whether number is perfect or not.
Use BufferedReader class for accepting input from user. */

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        System.out.print("Enter a number: ");
        int n = Integer.parseInt(br.readLine());
        
        int sum = 0;
        for (int i = 1; i <= n/2; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        
        if (sum == n) {
            System.out.println(n + " is a perfect number");
        } else {
            System.out.println(n + " is not a perfect number");
        }
    }
}

x------x

/* Q2 Define a “Point” class having members – x,y(coordinates). Define default constructor and
parameterized constructors. Define subclass “Point3D” with member as z (coordinate). Write

display method to show the details of Point */


class Point {
    protected int x, y;

    Point() {
        x = 0;
        y = 0;
    }

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void display() {
        System.out.println("Point Coordinates: (" + x + ", " + y + ")");
    }
}

class ColorPoint extends Point {
    private String color;

    public ColorPoint(int x, int y, String color) {
        super(x, y);
        this.color = color;
    }

    public void display() {
        System.out.println("ColorPoint Coordinates: (" + x + ", " + y + "), Color: " + color);
    }
}

class Point3D extends Point {
    private int z;

    Point3D(int x, int y, int z) {
        super(x, y);
        this.z = z;
    }

    void display() {
        System.out.println("Point3D Coordinates: (" + x + ", " + y + ", " + z + ")");
    }
}

public class Main {
    public static void main(String[] args) {
        Point p1 = new Point();
        Point p2 = new Point(5, 10);
        ColorPoint cp = new ColorPoint(3, 4, "Red");
        Point3D p3d = new Point3D(7, 8, 9);

        p1.display();
        p2.display();
        cp.display();
        p3d.display();
    }
}
