using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Xml;

namespace DynamicArray
{
    internal class Program
    {


        private static void Main(string[] args)
        {
            int input = 0;
            int elementCount = 0;


            Console.Out.WriteLine("Please provide me with the size of the array you wish to initialize.");

            input = int.Parse(Console.ReadLine());
            int[] inputArray = new int[input];




            Console.Out.WriteLine("Please input your numbers, input -1 when you would like to stop.");

            while (true)
            {
                input = int.Parse(Console.In.ReadLine());

                if (input == -1)
                {
                    break;
                }

                




                inputArray = AddElement(inputArray, input, elementCount);

                elementCount++;
            }

            Console.WriteLine("You entered " + elementCount + " numbers.");

            foreach (var element in inputArray)
            {
                Console.WriteLine(element);
            }

            Console.ReadKey();
        }

        static int[] AddElement(int[] oldArray, int element,int elementCount)
        {

            if (oldArray.Length == elementCount)
            {
                int[] newArray = SwapArrays(oldArray);
                newArray[elementCount] = element;
                return newArray;
            }

            oldArray[elementCount] = element;
            return oldArray;
        }

        static int[] SwapArrays(int[] oldArray)
        {
            int[] newArray = new int[oldArray.Length + 1];

            for (int i = 0; i < oldArray.Length; i++)
            {
                newArray[i] = oldArray[i];
            }

            return newArray;
        }
    }
}
