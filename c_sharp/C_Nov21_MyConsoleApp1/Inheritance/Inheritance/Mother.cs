﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Inheritance
{
    class Mother
    {
       public int age { get; set; }
        public string name { get; set; }

        public Mother()
        {
            age = 45;
             name = "Archana";
        }
        public override string ToString()
        {
            return "mother name    " + name + "   age" +age;
        }
    }
   

}
