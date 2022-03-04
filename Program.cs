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
            if ( a >= 48 && a <= 57)
            {
                Console.WriteLine("IS DIGIT");
            }
            else
            {
                if ( a >= 65 && a <= 90)
                {
                    Console.WriteLine("ALPHA");
                    Console.WriteLine("IS CAPITAL");
                }
                else
                {
                    Console.WriteLine("ALPHA");
                    Console.WriteLine("IS SMALL");
                }
            }
        }
    }
}
