using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2_DoubleLinkedList.Classes
{
    public class Node
    {
        public Node nextName;
        public Object nameData;
        public Node nextWeight;
        public Object weightData;
    }

    public class LinkedList
    {
        private Node nameHead;
        private Node weightHead;

        public void Add(string Name, int weight)
        {
            Node currName = nameHead;
            Node currWeight = weightHead;

            while (-1 != string.Compare((string)currName.nextName.nameData, Name))
            {

            }

        }
        
        
        
        
        
        
        
        public void printNO()
        {
            Node current = nameHead;

            while(current != null)
            {
                Console.WriteLine(current.nameData);
                Console.WriteLine(current.weightData);
            }
        }

        public void printWO()
        {
            Node current = weightHead;

            while (current != null)
            {
                Console.WriteLine(current.nameData);
                Console.WriteLine(current.weightData);
            }
        }
    }
    
}
