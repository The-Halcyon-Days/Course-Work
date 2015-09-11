using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Loops_Lab_Loops_Erkis_Zarabozo
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Input the number whose summation you would like:");

            var numToSum = Convert.ToInt32(Console.ReadLine());

            sum(numToSum);

            Console.ReadKey();
        }

        static void sum(int n)
        {
            var sum = 0;

            for (var i = n; i > 0; i--)
            {
                Console.WriteLine(sum + " + " + i + " = " + (sum += i));
            }
        }
    }
}
