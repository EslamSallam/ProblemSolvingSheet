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
            input = Console.ReadLine();
            string[] inputs = input.Split(' ');
           
            a = int.Parse(inputs[0]);
            b = int.Parse(inputs[1]);
            c = int.Parse(inputs[2]);
            List<int> li = new List<int>();

            li.Add(a);
            li.Add(b);
            li.Add(c);
            li.Sort();
            Console.WriteLine(li[0] + " " + li[2]);
        }
    }
}
