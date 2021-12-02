using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Inheritance
{
    class Daughter:Mother
    {

    public int D_age { get; set; }
        public string D_name { get; set; }
        public Daughter():base()
        {
            D_age = 12;
            D_name = "Arti";

        }
        public override string ToString()
        {
            return base.ToString();
        }
    }
}
