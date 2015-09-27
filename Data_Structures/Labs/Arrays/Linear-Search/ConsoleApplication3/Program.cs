using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication3
{
    internal class Program
    {
        private static void Main(string[] args)
        {
            var numArray = new int[5] {1,2,3,4,5};

            Console.WriteLine("The index of the search item is: " + 
                ArraySearch(numArray, 3));

            Console.ReadKey();
        }

        static int ArraySearch(int[] numArray,int searchItem )
        {
            for (int i = 0; i < numArray.Length; i++)
            {
                if (numArray[i] == searchItem)
                {
                    return i;
                }
            }
                
            return -1;
        }
}
}
