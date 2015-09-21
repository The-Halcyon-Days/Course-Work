using System;
using System.CodeDom;
using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Remoting.Messaging;
using System.Text;
using System.Threading.Tasks;

namespace Program_1.Classes
{
    class LinkedList
    {
        class Node
        {
            public Node Link;
            public int Value;
        }


        private Node _head = null;

        public void Add(int element)
        {
            Node newNode = new Node
            {
                Link = _head,
                Value = element
            };
            _head = newNode;
        }

        public int RemoveLast()
        {
            Node currNode = _head;
            Node tempNode = null;

            while (currNode != null)
            {
                Console.WriteLine(currNode.Value);
                if (currNode.Link == _head)
                {
                    tempNode = _head;
                    _head = currNode;
                    break;
                }
                currNode = currNode.Link;
            }
            return tempNode.Value;
        }

        public void Remove(int element)
        {
            Node currNode = _head;

            while (currNode.Value != element || currNode != null)
            {
                Console.WriteLine(currNode.Value);
                currNode = currNode.Link;
            }
            _head = _head.Link;
        }

    }
}
