using System;
using System.Collections.Generic;

namespace ProblemSolving
{
    internal class Program
    {
        private const double PI = 3.141592653;

        static void Main(string[] args)
        {
            int a;
            a = Console.Read();
            if (a > 90)
            {
                Console.WriteLine(((char)(a - 32)));
            }
            else
            {
                Console.WriteLine(((char)(a + 32)));
            }
        }
    }
}
