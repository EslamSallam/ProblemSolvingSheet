using System;

namespace ProblemSolving
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input;
            long a;
            long b;      
            long c;
            long d;
            input = Console.ReadLine();
            string[] inputs = input.Split(' ');
           
            a = long.Parse(inputs[0]);
            b = long.Parse(inputs[1]);
            c = long.Parse(inputs[2]);
            d = long.Parse(inputs[3]);
            Console.WriteLine("Difference = " + ((a*b) - (c * d)).ToString());
            
        }
    }
}
