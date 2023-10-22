using System;
using System.Collections.Generic;

namespace Heap_C_
{
    internal class Program
    {
        static void Main(string[] args)
        {

            List<int> L1_int= new List<int>(1) { 2, 5, 7, 8, 6, 10, 42, 11, 15, 28, 9, 13 };
            //HeapT<int> H1 = new HeapT<int>(L1_int);
            Heap H1 = new Heap(L1_int);
            H1.Print_massive();
            H1.Insert(3);
            H1.Print_massive();
            H1.Insert(1);
            H1.Print_massive();
            H1.Remove_min();
            H1.Print_massive();


    

            //Heap<int> H1 = new Heap<int>();



        }

    }

}
