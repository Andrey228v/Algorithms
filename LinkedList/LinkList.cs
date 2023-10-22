using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LinkedList
{
    internal class LinkList
    {

        private Link? first;

        public LinkList() {
            first = null;
        }
        


        public void deletLink(int index)
        {
            Link? current = first;
            Link? prevLink = first;

            while(current != null)
            {
                if (current.id == index)
                {

                    if(current == first)
                    {
                        first = first.next;
                    }
                    else
                    {
                        prevLink.next = current.next;
                    }

                }
                prevLink = current;
                current = current.next;
            }

        }

        public Link? findLink(int index)
        {
            Link? current = first;
            
            while(current != null)
            {
                if(current.id == index)
                {
                    return current;
                }
                current = current.next;
            }
            return null;
        }

        public bool isEmpty()
        {
            return (first == null);
        }

        public void isertFirst(Link link)
        {
            link.next = first;
            this.first = link;
        }

        public Link? deletFirst()
        {
            if (!isEmpty())
            {
                Link deleted_Link = first;            
                first = first.next;
                return deleted_Link;
            }

            return null;
        }

        public void displayList()
        {
            Console.WriteLine("List (first --> last)");
            Link? current = first;

            while(current != null)
            {
                current.displayLink();
                current = current.next;
            }
            Console.WriteLine("");
        }



    }
}
