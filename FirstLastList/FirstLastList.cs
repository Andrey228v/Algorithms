using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FirstLastList
{
    internal class FirstLastList
    {

        public Link? first;
        public Link? last;

        public FirstLastList()
        {
            first = null;
            last = null;
        }


        public Link? deletLink(int id)
        {

            Link? current = first;
            Link? prev = first;

            while (current != null)
            {

                if(current.id == id)
                {
                    if (current.id == first.id)
                    {
                        
                        first = current.next;
                    }
                    else if (current.id == last.id)
                    {
                        Console.WriteLine($"Test: id: {id}, current.id {current.id}");
                        Console.WriteLine($"Test: prev.next: {prev.id}, current: {current.id}");

                        last = prev;
                        prev.next = current.next;
                    }
                    else
                    {
                        prev.next = current.next;
                    }

                }

                prev = current;
                current = current.next;
            }

            return null;
        }


        public void insertLastElem(Link link)
        {
            
            last.next = link;
            Console.WriteLine(last.next.id);
            last = link;
        }

        public void insertFirstElem(Link link)
        {
            
            if(last == null)
            {
                last = link;
            }

            link.next = first;
            first = link;
        }

        public void displayList()
        {
            Link? current = first;

            Console.WriteLine("List (first --> last)");
            while (current != null)
            {
                current.displayLink();
                current = current.next;
            }

            if (first != null && last != null)
            {
                Console.WriteLine("List first:");
                Console.WriteLine(first.id);

                Console.WriteLine("List last:");
                Console.WriteLine(last.id);
            }
        }
    }
}
