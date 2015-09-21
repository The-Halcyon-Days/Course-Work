using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace Program_1.Classes
{
    class Stack
    {
        //private readonly  int[] StackArray = new int[10];
        private static int _topOfStack = -1;
        private static LinkedList psuedoStack = new LinkedList();

        public static void Push(int element)
        {
            _topOfStack++;
            //StackArray[_topOfStack] = element;
            psuedoStack.Add(element);
        }

        public static int Pop()
        {
            //int poppedElement = StackArray[_topOfStack];
            int poppedElement = psuedoStack.RemoveLast();
            _topOfStack--;
            return poppedElement;
        }

        public static bool IsEmpty()
        {
            return _topOfStack == -1 ? true : false;
        }

    }
}
