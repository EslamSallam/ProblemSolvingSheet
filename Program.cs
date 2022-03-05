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
            double a,b;
            input = Console.ReadLine();
            string[] inputs;
            inputs = input.Split(' ');
            a = double.Parse(inputs[0]);
            b = double.Parse(inputs[1]);
            if ( a == 0 && b == 0)
            {
                Console.WriteLine("Origem");
            }
            else if (b == 0)
            {
                Console.WriteLine("Eixo X");
            }
            else if (a == 0)
            {
                Console.WriteLine("Eixo Y");
            }
            else if (a > 0 && b > 0)
            {
                Console.WriteLine("Q1");
            }
            else if (a < 0 && b > 0)
            {
                Console.WriteLine("Q2");
            }
            else if (a < 0 && b < 0)
            {
                Console.WriteLine("Q3");
            }
            else
            {
                Console.WriteLine("Q4");
            }


        }
    }
}
