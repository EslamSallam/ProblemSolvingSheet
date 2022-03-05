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
            float a;
            int b;
            input = Console.ReadLine();
            string[] inputs = input.Split(' ');

            a = float.Parse(inputs[0]);
            b = (int)a;
            if (a - b > 0)
            {
                Console.WriteLine("float " + b + " " + (a - b));
            }
            else
            {
                Console.WriteLine("int " + b);
            }
        }
    }
}
