using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace Arrays_Simple_Array_Erkis_Zarabozo
{
    class Program
    {
        static void Main(string[] args)
        {
            var numArray = new int[5];

            Console.WriteLine("Please input 5 intigers");

            for (int i = 0; i < 5; i++)
            {
                numArray[i] = Convert.ToInt32(Console.ReadLine());
            }

            Console.WriteLine("You input these 5 intigers");

            foreach (var item in numArray)
            {
                Console.WriteLine(item);
            }

            Console.ReadKey();
        }
    }
}
