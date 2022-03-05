using System;
using System.Collections.Generic;

namespace ProblemSolving
{
    internal class Program
    {
        private const double PI = 3.141592653;

        static void Main(string[] args)
        {
            string input;
            int l1,r1,l2,r2;
            input = Console.ReadLine();
            string[] inputs = input.Split(' ');

            l1 = int.Parse(inputs[0]);
            r1 = int.Parse(inputs[1]);
            l2 = int.Parse(inputs[2]);
            r2 = int.Parse(inputs[3]);
            int l = Math.Max(l1, l2);
            int r = Math.Min(r1, r2);
            if (l > r)
            {
                Console.WriteLine(-1);
            }
            else
            {
                Console.WriteLine(l + " " + r);
            }
        }
    }
}
