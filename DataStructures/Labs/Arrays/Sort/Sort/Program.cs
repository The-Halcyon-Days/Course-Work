//===================================|
//  Output:                          |
//-----------------------------------|
//   Unsorted array:                 |
//   2 5 3 4 1                       |
//   Sorted array:                   |
//   1 2 3 4 5                       |
//===================================|


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sort
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] array = new int[5] {2, 5, 3, 4 ,1};

            Console.WriteLine("Unsorted array: ");
            foreach (var element in array)
            {
                Console.Write( element + " ");
            }

            BubbleSort(ref array);

            Console.WriteLine("\nSorted array: ");
            foreach (var element in array)
            {
                Console.Write(element + " ");
            }

            Console.ReadKey();
        }

        static void BubbleSort(ref int[] array)
        {
            bool changed = false;
            for(int i = 0; i < array.Length; i++)
            {
                for (int j = 0; j < array.Length -1; j++)
                {
                    if (array[j] > array[j + 1])
                    {
                        Swap(ref array, j, j + 1);
                        changed = true;
                    }

                }

                if (changed == false)
                {
                    break;
                }

            }        }

        static void Swap(ref int[] array, int pos1, int pos2)
        {
            int tempValue = array[pos1];

            array[pos1] = array[pos2];

            array[pos2] = tempValue;
        }

    }
}
