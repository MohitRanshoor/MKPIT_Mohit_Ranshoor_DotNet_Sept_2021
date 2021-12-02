using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Class_obj_example
{
    class Employee
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public decimal Salary { get; set; }

        public Employee()
        {
            Id = 1;
            Name = "Mohit";
            Salary = 10000;

        }
        public Employee(int id , string name ,decimal salary)

        {
            Id = id;
            Name = name;
            Salary = salary;
        }
        public override string ToString()
        {
            return "Employee Details are" + Id + " " + Name + " " + Salary;
        }
    }
}
