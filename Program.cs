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
            long a,b;
            input = Console.ReadLine();
            string[] inputs;
            if (input.Contains("+") == true)
            {
                inputs = input.Split('+');
                a = long.Parse(inputs[0]);
                b = long.Parse(inputs[1]);
                Console.WriteLine(a + b);
            }
            else if (input.Contains("-") == true)
            {
                inputs = input.Split('-');
                a = long.Parse(inputs[0]);
                b = long.Parse(inputs[1]);
                Console.WriteLine(a - b);
            }
            else if (input.Contains("*") == true)
            {
                inputs = input.Split('*');
                a = long.Parse(inputs[0]);
                b = long.Parse(inputs[1]);
                Console.WriteLine(a * b);
            }
            else
            {
                inputs = input.Split('/');
                a = long.Parse(inputs[0]);
                b = long.Parse(inputs[1]);
                Console.WriteLine(a / b);
            }



        }
    }
}
