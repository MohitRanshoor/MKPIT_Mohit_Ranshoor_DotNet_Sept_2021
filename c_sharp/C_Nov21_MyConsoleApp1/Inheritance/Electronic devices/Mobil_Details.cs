using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Electronic_devices
{
    class Mobil_Details
    {
        public int Id { get; set; }
        public string Mobile_Name { get; set; }
        public string Mobile_Specification { get; set; }

        public Mobil_Details()
        {
            Id = 1;
            Mobile_Name = "Iphone_11";
            Mobile_Specification= "4 gb RAM";

                 
        }
        public override string ToString()
        {
            return ("Mobile Id: "+Id+" "+"Model: "+Mobile_Name+" Mobile_spec: "+Mobile_Specification);
        }

    }
}
