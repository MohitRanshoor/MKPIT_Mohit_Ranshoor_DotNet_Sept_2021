using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Electronic_devices
{
    class Laptop
    { 
        public string name { get; set; }
        public int RAM { get; set; }
        public Laptop()
        {
            name = "Lenovo";
            RAM = 8;

        }
        public override string ToString()
        {
            return ("laptop details : "+name+" "+ "RAM"+RAM);
        }
    }

}
