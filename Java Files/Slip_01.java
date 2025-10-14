// Q1 Write a program to accept a number from user and generate multiplication table of a number
import java.util.*;

public class mulTable{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number to print table : ");
        int num = sc.nextInt();
        sc.close();

        for (int i = 1; i <= 10; i++){
            System.out.println(num + "x" + i + " = " + num * i);
        }

    }
}





x----x


/* Q2. Construct a linked List containing names of colours: red, blue, yellow and orange. Then
extend the program to do the following:
i. Display the contents of the List using an Iterator
ii. Display the contents of the List in reverse order using a ListIterator
iii. Create another list containing pink and green. Insert the elements of this list between
blue and yellow.
*/

import java.util.LinkedList;
import java.util.ListIterator;
import java.util.Iterator;

public class Q2{
    public static void main(String[] args) {
        LinkedList<String> colors = new LinkedList<>();
        colors.add("red");
        colors.add("blue");
        colors.add("yellow");
        colors.add("orange");

        // 1. Display The contents of the linked list using an Iterator
        System.out.println("Linked List contents using Iterator:");
        Iterator<String> iterator = colors.iterator();
        while(iterator.hasNext()){
            System.out.println(iterator.next());
        }
        System.out.println();

        // 2. Display List Contents in Reverse Order

        System.out.println("ii. Contents of List in Reverse Order : ");
        ListIterator<String> listIterator = colors.listIterator(colors.size());
        while(listIterator.hasPrevious()){

            System.out.println(listIterator.previous());
        }
        System.out.println();

        // 3. Create another Linked List containing pink & green insert between blue and yellow

        System.out.println("iii. Inserting pink & green between blue and yellow : ");
        LinkedList<String> newColors = new LinkedList<>();
        newColors.add("pink");
        newColors.add("green");

        int blueIndex = colors.indexOf("blue");
        if(blueIndex != -1){
            colors.addAll(blueIndex + 1, newColors);
        }

        System.out.println("Updated Contents after Insertion: ");
        for(String color : colors){
            System.out.println(color);
        }
    }
}
