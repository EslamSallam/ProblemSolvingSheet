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
            int a,b;
            char ch;
            input = Console.ReadLine();
            string[] inputs = input.Split(' ');

            a = int.Parse(inputs[0]);
            ch = char.Parse(inputs[1]);
            b = int.Parse(inputs[2]);
            if (ch == '>')
            {
                if (a > b)
                {
                    Console.WriteLine("Right");
                }
                else
                {
                    Console.WriteLine("Wrong");
                }
            }
            else if (ch == '<')
            {
                if (a < b)
                {
                    Console.WriteLine("Right");
                }
                else
                {
                    Console.WriteLine("Wrong");
                }
            }
            else if (ch == '=')
            {
                if (a == b)
                {
                    Console.WriteLine("Right");
                }
                else
                {
                    Console.WriteLine("Wrong");
                }
            }
        }
    }
}
