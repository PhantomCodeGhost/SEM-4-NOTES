
/* Q1 Write a program to accept the user name and greets the user by name. Before displaying the 
user's name, convert it to upper case letters. For example, if the user's name is Raj, then display
greet message as "Hello, RAJ, nice to meet you!". 
import java.util.Scanner; */


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


x--------x

/* Q2 Write a program to design following GUI using swing. On click of Show button display the
selected Programming language on screen using label. */


import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Box{
        public static void main(){
                JFrame frame = new JFrame("combo box example:");
                frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

                frame.setSize(400,200);

                frame.setLayout(new FlowLayout());

                JLabel label = new JLabel("Programming lang selected.");

                String[] languages = {"C","C++","C#","Java","Php"};

                JComboBox<String> comboBox = new JComboBox<>(languages);

                JButton showButton= new JButton("Show");

                showButton.addActionListener(new ActionListener()
                {
                        public void ActionPerformed(ActionEvent e){
                                String selectedLanguage = (String)comboBox.getSelectedItem();
                                label.setText("Programming language selected"+selectedLanguage);
                        }
                });

                frame.add(comboBox);
                frame.add(showButton);
                frame.add(label);

                frame.setVisible(true);
        }
}


