namespace FirstLastList
{
    internal class Program
    {
        static void Main(string[] args)
        {
            FirstLastList FLlist = new FirstLastList();
            FLlist.insertFirstElem(new Link(0, "Andrey"));
            FLlist.insertFirstElem(new Link(1, "Test0"));
            FLlist.insertFirstElem(new Link(2, "Test2"));
            FLlist.insertFirstElem(new Link(3, "Test4"));

            FLlist.displayList();
            
            Console.WriteLine("Delet elements: ");
            FLlist.deletLink(1);
            FLlist.deletLink(0);
            FLlist.deletLink(3);

            FLlist.insertFirstElem(new Link(10, "Krot"));
            FLlist.deletLink(13);

            FLlist.deletLink(2);
            FLlist.deletLink(10);


            FLlist.insertFirstElem(new Link(10, "Andrey"));
            FLlist.insertFirstElem(new Link(11, "Test0"));
            FLlist.insertLastElem(new Link(12, "Test11"));

            //Console.WriteLine($"{FLlist.first.id}, {FLlist.first.next.id}, {FLlist.first.next.next.id}");
            //FLlist.deletLink(10);

            FLlist.displayList();
        }
    }
}