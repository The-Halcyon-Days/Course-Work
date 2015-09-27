//==========================================================================|
//				                      Lab	   		                        |
//--------------------------------------------------------------------------|
//				                  Description	    	                   	|
//	   		                     Binary Search	                        |
// Write a function that accepts a sorted array and searches the array      |
// in a binary fashion, returning the index of the found element,           |
// or -1 if not found.                                                      |
//--------------------------------------------------------------------------|
//                                   Notes                                  |
// I used http://anh.cs.luc.edu/170/notes/CSharpHtml/binarysearching.html   |
// as a reference point for the code and logic when doing this lab.         |
//--------------------------------------------------------------------------|
// Name:	Erkis Zarabozo							                    	|
// ID:      836873										                    |
// Class:	CS41, Tuesdays										            |
//==========================================================================|


using System;

namespace BinarySearch
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] sortedInts = new int[] { 2, 5, 7, 21, 45, 100, 300, 500, 2200, 12345 };

            Console.WriteLine("The element 7 is located at the index " + BinarySearch(sortedInts, 7));

            Console.ReadKey();
        }

        static int BinarySearch(int[] array, int element)
        {
            int min = 0;
            int max = array.Length - 1;

            do
            {
                int mid = (min + max) / 2;

                if (element > array[mid])
                {
                    min = mid + 1;
                }
                else
                {
                    max = mid - 1;
                }

                if (array[mid] == element)
                {
                    return mid;
                }
            } while (min <= max);

            return -1;
        }
    }
}

//============================================================================|
//                                  Output                                    |
//----------------------------------------------------------------------------|
// The element 7 is located at the index 2                                    |
//============================================================================|