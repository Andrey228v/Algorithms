namespace LinkedList
{
    internal class Program
    {
        static void Main(string[] args)
        {
            
            LinkList linkList1 = new LinkList();
            linkList1.isertFirst(new Link(0, "Andrey"));
            linkList1.isertFirst(new Link(1, "Test"));
            linkList1.isertFirst(new Link(2, "Test 2"));
            linkList1.isertFirst(new Link(3, "Test 4"));

            linkList1.displayList();

            while(!linkList1.isEmpty())
            {
                Link? aLink = linkList1.deletFirst();
                Console.WriteLine("Deleted:");
                aLink.displayLink();
                Console.WriteLine("");
            }

            linkList1.displayList();

            linkList1.isertFirst(new Link(0, "Andrey 2 "));
            linkList1.isertFirst(new Link(1, "Test 5"));
            linkList1.isertFirst(new Link(2, "Test 6"));
            linkList1.isertFirst(new Link(3, "Test 7"));
            //Link? fElem = linkList1.findLink(0);
            Console.WriteLine("Показ всех элементов:");
            //fElem.displayLink();
            linkList1.displayList();

            Console.WriteLine("Удаление элементов:");
            linkList1.deletLink(2);
            linkList1.deletLink(1);
            linkList1.deletLink(0);
            linkList1.deletLink(4);
            linkList1.deletLink(3);
            linkList1.displayList();



        }
    }
}