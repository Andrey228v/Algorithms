using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.CompilerServices;

namespace Z16
{
    internal class Program
    {
        static void Main(string[] args)
        {
            StreamReader sr = new StreamReader("input.txt");
            StreamWriter sw = new StreamWriter("output.txt");
            int N = Convert.ToInt32(sr.ReadLine());

            int data_in_1 = N;

            int R1 = Reshenie(data_in_1);
            


            sw.WriteLine(R1);
            
            sr.Close();
            sw.Close();


        }
    
        static int Reshenie(int data)
        {
            int sum = 0;
            int max_zhach = data;
            List<int> cashe = new List<int>(max_zhach) { 0, 1, 1};
            int pred_stup = max_zhach + 1;
            

            int Res = razbienie(data, sum, max_zhach, cashe, pred_stup);
            string elem_cashe = "";
            

            foreach (int i in cashe)
            {
                elem_cashe += i + " ";
            }

            Console.WriteLine(elem_cashe);
            Console.WriteLine($"Результат разбиения {data}: {Res}");


            return Res;
        }


        static int razbienie(int data, int sum, int max_znach, List<int> cashe, int pred_stup)
        {
            int result = 0;
            int sum_zahoda = sum;

            for (int i = data; i >= 1; i--)
            {


                if(i < pred_stup)
                {
                    sum += i;
                }

                Console.WriteLine($"i:{i}, (data/2): {(data / 2)}, sum: {sum}, max_znach: {max_znach}, pred_stup: {pred_stup}");

                if (sum != max_znach && i != 0)
                {
                    result += razbienie(data - i, sum, max_znach, cashe, i);
                }
                else if (sum == max_znach)
                {
                    if (i < pred_stup)
                    {
                        Console.WriteLine("Result");
                        Console.WriteLine($"i:{i}, pred_stup: {pred_stup}");
                        result++;
                    }
                }

                sum = sum_zahoda;
            }

            Console.WriteLine("---RETURN---");

            if (cashe.Count - 1 <= data)
            {
                Console.WriteLine($"cash_count:{cashe.Count}, data:{data}");
                cashe.Add(result);
            }


            return result;
        }
    }
}
