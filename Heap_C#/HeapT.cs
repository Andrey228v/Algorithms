using System;
using System.Collections.Generic;


namespace Heap_C_
{
    internal class HeapT<T>
    {

        public List<T> A;

        public HeapT() 
        {
            A = new List<T>();
        }

        public HeapT(List<T> array)
        {
            A = array;
        }


        public void Insert(T elem)
        {
            Console.WriteLine($"elem: {elem}, elem type: {elem.GetType()}");
            A.Add(elem);
            int n = A.Count;
            int i = n - 1;
            

            //while (i > 0 && A[i] < A[(i - 1) / 2])
            //{

            //}
            
        }


        public int Get_min(List<int> A)
        {
            return A[0];
        }


        public void Swap(T elem_1, T elem_2)
        {
            

        }

        public void Print_massive()
        {
  
            foreach (T elem in A)
            {
                Console.Write(elem + " ");
            }

            Console.WriteLine(" ");
        }
    }
}
