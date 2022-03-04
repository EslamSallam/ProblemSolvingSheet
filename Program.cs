using System;
using System.Collections.Generic;

namespace ProblemSolving
{
    internal class Program
    {
        private const double PI = 3.141592653;

        static void Main(string[] args)
        {
            string input1,input2;
            string a,b,c,d;
            input1 = Console.ReadLine();
            input2 = Console.ReadLine();
            string[] inputs = input1.Split(' ');
            a = inputs[0];
            b = inputs[1];
            inputs = input2.Split(' ');
            c = inputs[0];
            d = inputs[1];
            
            if (b == d)
            {
                Console.WriteLine("ARE Brothers");
            }
            else
            {
                Console.WriteLine("NOT");
            }
        }
    }
}
