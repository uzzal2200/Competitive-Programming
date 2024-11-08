import java.util.Scanner;

class person
{
    public int roll;
    public String name;
    public void display()
    {
        System.out.println("Nmae "+name);
        System.out.println("Roll "+roll);

    }
}
class student extends person
{
    public double salary;
    public void display2()
    {
        System.out.println("Salary "+salary);
        display();
    }

}
public class ban {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        System.out.print("Enter name: ");
        String name =  scanner.nextLine();
 
        System.out.print("Enter age: ");
        int roll  = scanner.nextInt();


         System.out.print("Enter salary: ");
        double salary = scanner.nextDouble();
        student obj = new student();
        obj.roll = roll;
        obj.name  = name ;
        obj.salary = salary;
        obj.display2();



        scanner.close();  
        
    }
}
