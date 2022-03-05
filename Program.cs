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
            double n;
            input = Console.ReadLine();
            string[] inputs = input.Split(' ');
            n = double.Parse(inputs[0]);
            if (n >= 0 && n <= 25)
            {
                Console.WriteLine("Interval [0,25]");
            }
            else if (n > 25 && n <= 50)
            {
                Console.WriteLine("Interval (25,50]");
            }
            else if (n > 50 && n <= 75)
            {
                Console.WriteLine("Interval (50,75]");
            }
            else if (n > 75 && n <= 100)
            {
                Console.WriteLine("Interval (75,100]");
            }
            else
            {
                Console.WriteLine("Out of Intervals");
            }
        }
    }
}
