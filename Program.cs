using System;

namespace ProblemSolving
{
    internal class Program
    {
        private const double PI = 3.141592653;

        static void Main(string[] args)
        {
            string input;
            long n;
            long m;
            input = Console.ReadLine();
            string[] inputs = input.Split(' ');
           
            n = long.Parse(inputs[0]);
            m = long.Parse(inputs[1]);
            int result = (int)((n % 10) + (m % 10));
            Console.WriteLine(result.ToString());
            
        }
    }
}
