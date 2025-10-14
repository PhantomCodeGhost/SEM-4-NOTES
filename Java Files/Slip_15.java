Q1

import java.util.LinkedList;
import java.util.ListIterator;

public class Main {
    public static void main(String[] args) {
        // Create a Linked List of fruits
        LinkedList<String> fruits = new LinkedList<>();
        
        // Add fruits to the list
        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("Guava");
        fruits.add("Orange");
        
        // Display original list
        System.out.println("Original List: " + fruits);
        
        // Display in reverse order using ListIterator
        System.out.println("\nFruits in Reverse Order:");
        ListIterator<String> iterator = fruits.listIterator(fruits.size());
        while(iterator.hasPrevious()) {
            System.out.println(iterator.previous());
        }
    }
}