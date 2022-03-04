using System;

namespace ProblemSolving
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input;
            long x;
            long y;
            input = Console.ReadLine();
            string[] inputs = input.Split(' ');
            x = long.Parse(inputs[0]);
            y = long.Parse(inputs[1]);
            Console.WriteLine(x.ToString() + " + " + y.ToString() + " = " + (x + y).ToString());
            Console.WriteLine(x.ToString() + " * " + y.ToString() + " = " + (x * y).ToString());
            Console.WriteLine(x.ToString() + " - " + y.ToString() + " = " + (x - y).ToString());
        }
    }
}
