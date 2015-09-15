using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Array_based_Stack
{
    internal class Stack
    {
        public int Count;
        private int _topOfStack = -1;
        private readonly int[] _stackArrayInts = new int[10];

        public void Push(int element)
        {
            _topOfStack++;
            _stackArrayInts[_topOfStack] = element;
        }

        public int Pop()
        {
            int element = _stackArrayInts[_topOfStack];

            _stackArrayInts[_topOfStack] = 0; // Probably no point to doing so?
            // Should just be left alone in c#?                     
            _topOfStack--;
            return element;
        }

        public bool IsEmpty()
        {
            return _topOfStack == 0 ? true : false;
        }

    }
}
