// Q1 program to accept the 'n' different numbers from user and store it in array. Display maximum number from an array

import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("How many numbers?");
		int n = sc.nextInt();

		int[] arr = new int[n];
		int max = 0;

		System.out.println("Enter " + n + "numbers : ");
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
			if(max < arr[i]) {
				max = arr[i];
			}
		}
		System.out.println("The max n of array : " + max);
		sc.close();
	}
}


x-----x

******************************************************************************************************
// Note :  Here used protected in abstract class and accessed them using (this = keyword) in sub-class
******************************************************************************************************
/* Q2 Create an abstract class “order” having members id, description. Create a subclass
“Purchase Order” having member as customer name. Define methods accept and display.
Create 3 objects each of Purchase Order. Accept and display the details. */


import java.util.Scanner;

abstract class Order {
    protected int id;
    protected String description;
    
    public abstract void accept(Scanner sc);  // Pass scanner as parameter
    public abstract void display();
}

class PurchaseOrder extends Order {
    private String customerName;
    
    public void accept(Scanner sc) {
        System.out.print("Enter Order ID: ");
        this.id = sc.nextInt();
        sc.nextLine(); 		// Note : When using nextLine() after nextInt() to consume newline
        System.out.print("Enter Description: ");
        this.description = sc.nextLine();
        System.out.print("Enter Customer Name: ");
        this.customerName = sc.nextLine();
    }
    
    public void display() {
        System.out.println("Order ID: " + id);
        System.out.println("Description: " + description);
        System.out.println("Customer Name: " + customerName);
        System.out.println("---------------------------");
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);  // Only one scanner
        PurchaseOrder[] orders = new PurchaseOrder[3];
        
        for(int i = 0; i < 3; i++) {
            System.out.println("\nEnter details for Order " + (i+1) + ":");
            orders[i] = new PurchaseOrder();
            orders[i].accept(sc);  // Pass the same scanner
        }
        
        System.out.println("\n=== ORDER DETAILS ===");
        for(int i = 0; i < 3; i++) {
            System.out.println("Order " + (i+1) + ":");
            orders[i].display();
        }
        
        sc.close();  // Close only once
    }
}




