using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Heap_C_
{
    internal class Heap
    {
        public List<int> A;

        public Heap()
        {
            A = new List<int>();
        }

        public Heap(List<int> array)
        {
            A = array;
        }


        public void Insert(int elem) // сложность O(lgN)
        {
            Console.WriteLine($"elem: {elem}, elem type: {elem.GetType()}");
            A.Add(elem);
            int n = A.Count;
            int i = n - 1;

            while (i > 0 && A[i] < A[(i - 1) / 2])
            {
                Swap(A, i, (i - 1) / 2);
                i = (i - 1) / 2;
            }

        }


        public void Remove_min() //сложность O(lgN)
        {
            Console.WriteLine($"last elem: {A[A.Count() - 1]}");
            Swap(A, 0, A.Count() - 1);
            Print_massive();
            A.RemoveAt(A.Count - 1);

            int i = 0;
            int N = A.Count;
            while (2*i+1 < N)
            {
                int j = 2*i+1;
                if ((2 * i + 2 < N) && (A[2 * i + 2] < A[j]))
                {
                    j = 2 * i + 2;
                }
                if (A[i] <= A[j])
                {
                    break;
                }
                else
                {
                    Swap(A, i, j);
                    i = j;
                }

            } 

        }


        public int Get_min(List<int> A)
        {
            return A[0];
        }


        private void Swap(List<int>A, int pos_elem_1, int pos_elem_2)
        {
            int tmp = A[pos_elem_1];
            A[pos_elem_1] = A[pos_elem_2];
            A[pos_elem_2] = tmp;
        }

        public void Print_massive()
        {
            foreach (int elem in A)
            {
                Console.Write(elem + " ");
            }
            Console.WriteLine(" ");
        }
    }
}
