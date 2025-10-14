


Q2 



class Employee {
    String name;
    double salary;
    
    public Employee(String name, double salary) {
        this.name = name;
        this.salary = salary;
    }
}

class Programmer extends Employee {
    String proglanguage;
    
    public Programmer(String name, double salary, String proglanguage) {
        super(name, salary);
        this.proglanguage = proglanguage;
    }
    
    void display() {
        System.out.println("Name: " + name + ", Salary: $" + salary + 
                          ", Language: " + proglanguage);
    }
}

public class Main {
    public static void main(String[] args) {
        Programmer p = new Programmer("John Doe", 70000, "JavaScript");
        p.display();
    }
}