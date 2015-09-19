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
        private readonly static int[] StackArray = new int[10];
        private static int _topOfStack = -1;

        public static void Push(int element)
        {
            _topOfStack++;
            StackArray[_topOfStack] = element;
        }

        public static int Pop()
        {
            int poppedElement = StackArray[_topOfStack];
            _topOfStack--;
            return poppedElement;
        }

        public static int Peek()
        {
            return StackArray[_topOfStack];
        }

        public static bool IsEmpty()
        {
            return _topOfStack == -1 ? true : false;
        }

    }
}
