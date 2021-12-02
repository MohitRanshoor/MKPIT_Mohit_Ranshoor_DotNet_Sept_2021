using System;

namespace Class_obj_example
{
    internal class Program
    {
        static void Main(string[] args)
        {

            Employee e1 = new Employee(1, "Mohit", 10000);
            Console.WriteLine(e1.ToString());
            //Console.WriteLine(e1);
           ////Employee employee = new Employee();
           //// employee.firstname = "mohit";
           //// employee.lastname = "Ranshoor";
           //// employee.id = 1;
           // Console.WriteLine(employee.id+"  "+employee.firstname + " " + employee.lastname);
        }
    }
}
