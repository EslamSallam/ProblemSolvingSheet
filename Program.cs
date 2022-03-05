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
            int a,b,c;
            char s,q;
            input = Console.ReadLine();
            string[] inputs = input.Split(' ');

            a = int.Parse(inputs[0]);
            s = char.Parse(inputs[1]);
            b = int.Parse(inputs[2]);
            q = char.Parse(inputs[3]);
            c = int.Parse(inputs[4]);
            if (s == '+')
            {
                if (a + b == c)
                {
                    Console.WriteLine("Yes");
                }
                else
                {
                    Console.WriteLine(a + b);
                }
            }
            else if (s == '-')
            {
                if (a - b == c)
                {
                    Console.WriteLine("Yes");
                }
                else
                {
                    Console.WriteLine(a - b);
                }
            }
            else if (s == '*')
            {
                if (a * b == c)
                {
                    Console.WriteLine("Yes");
                }
                else
                {
                    Console.WriteLine(a * b);
                }
            }
        }
    }
}
