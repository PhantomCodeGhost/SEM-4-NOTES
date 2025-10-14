import java.util.Hashtable;

public class SimplerEmployeeHashTable {
    public static void main(String[] args) {
        Hashtable<String, Double> employees = new Hashtable<>();
        
        employees.put("John Smith", 75000.0);
        employees.put("Emma Johnson", 82000.0);
        employees.put("Michael Brown", 68000.0);
        employees.put("Sarah Davis", 91000.0);
        
        System.out.println("Employee Salary Details:");
        System.out.println("-----------------------");
        
        for (String name : employees.keySet()) {
            System.out.println(name + ": $" + employees.get(name));
        }
        
        System.out.println("\nTotal Employees: " + employees.size());
    }
}