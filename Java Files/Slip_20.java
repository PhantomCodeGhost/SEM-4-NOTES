/* Q1 Accept 3 numbers using command line argument. Sort and display the numbers. */

import java.util.*;

public class Main{
    public static void main(String[] args){
        int[] nums = new int[3];
        
        for(int i = 0; i < 3; i++){
            nums[i] = java.lang.Integer.parseInt(args[i]);
        }
        
        Arrays.sort(nums);
        
        for(int num : nums){
            System.out.print(num + " ");
        }
    }
}


x-------x


/*Q2.Create an employee class (id,name,deptname,salary). Define a default and parameterized
constructor. Use ‘this’ keyword to initialize instance variables. Keep a count of objects created.
Create objects using parameterized constructor and display the object count after each object is
created. Also display the contents of each object. 

*/
class Employee {
    private int id;
    private String name;
    private String deptName;
    private double salary;
    private static int count = 0;
    
    // Default constructor
    public Employee() {
        this(0, "Unknown", "Unknown", 0.0);
    }
    
    // Parameterized constructor
    public Employee(int id, String name, String deptName, double salary) {
        this.id = id;
        this.name = name;
        this.deptName = deptName;
        this.salary = salary;
        count++;
        System.out.println("Objects created: " + count);
    }
    
    public void display() {
        System.out.println(id + " " + name + " " + deptName + " " + salary);
    }
    
    public static int getCount() {
        return count;
    }
}

// Main class
public class Main {
    public static void main(String[] args) {
        Employee e1 = new Employee(101, "John", "IT", 50000);
        e1.display();
        
        Employee e2 = new Employee(102, "Jane", "HR", 45000);
        e2.display();
        
        Employee e3 = new Employee(103, "Bob", "Finance", 60000);
        e3.display();
        
        System.out.println("Total objects: " + Employee.getCount());
    }
}