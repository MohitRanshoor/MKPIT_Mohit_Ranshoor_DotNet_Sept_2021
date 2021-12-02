using System;

namespace Programs1
{
    class Program
    {
        static void Main(string[] args)
        {
            int radius = 7;
            double ar;
            Area(ref radius, out ar);
            Console.WriteLine("radius = " + radius + " " + "Area of circle = " + ar);
            viewnames('g', 3, "pooja", "nikita", "aishwariya");
            viewnames('b', 4, "nilesh", "akash", "roshan", "mohit");
            CountProduct("mango", "apple");

        }
        public static void Area(ref int r, out double a)
        {
            a = Math.PI * r * r;
        }
        static void viewnames(char x, int n, params string[] names)
        {
            if (x == 'g')
            {
                Console.WriteLine("girls presnt in my class ");
                for (int i = 0; i < n; i++)
                    Console.WriteLine(names[i]);

            }
            else 
                    {

                Console.WriteLine("Boys present in my class");
                for (int i = 0; i < n; i++)
                    Console.WriteLine(names[i]);
            }

           public static void CountProducts(params string[]products)
            {
                foreach(string P in products )
                {
                    Console.WriteLine(P+" ");
                }
                Console.WriteLine("productcount:"+ products.Length);
                
            }





       }


    }

}
