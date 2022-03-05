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
            long a;
            input = Console.ReadLine();
            string[] inputs;

            a = long.Parse(input);
            a = (long)(a / Math.Pow(10, (input.Length - 1)));

            if (a % 2 == 0)
            {
                Console.WriteLine("EVEN");
            }
            else
            {
                Console.WriteLine("ODD");
            }



        }
    }
}
