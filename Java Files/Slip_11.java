//Q1. Write a program create class as MyDate with dd,mm,yy as data members. Write parameterized constructor. Display the date in dd-mm-yy format. (Use this keyword)
import java.util.*;

public class MyDate{
    private int dd, mm, yy;
    
    MyDate(int dd,int mm, int yy){
        this.dd = dd;
        this.mm = mm;
        this.yy = yy;
    }
    void displayDate(){
        System.out.print(" Date "+ dd + " - " + mm + " - " + yy);
    }

    public static void main(String[] args){
        MyDate date1 = new MyDate(06,10,2004);
        date1.displayDate();
    }
}

//Q2 Create an abstract class Shape with methods area & volume. Derive a class Sphere (radius). Calculate and display area and volume

import java.util.*;

abstract class Shape{
    abstract float area();
    abstract float volume();
}

class Sphere extends Shape{
    int radius;
    
    // Constructor to set radius
    public Sphere(int radius) {
        this.radius = radius;
    }
    
    // Override abstract methods - no parameters needed
    public float area(){
        return 4 * 3.14f * (radius * radius); // Surface area of sphere: 4πr²
    }
    
    public float volume(){
        return (4.0f / 3.0f) * 3.14f * radius * radius * radius; // Volume of sphere: (4/3)πr³
    }
}

public class Main{
    public static void main(String[] args){
        Sphere sp = new Sphere(5); // Pass radius to constructor
        System.out.println("Area: " + sp.area());
        System.out.println("Volume: " + sp.volume());
    }
}