using System;

namespace ProblemSolving
{
    internal class Program
    {
        private const double PI = 3.141592653;

        static void Main(string[] args)
        {
            string input;
            ulong n;
            input = Console.ReadLine();
            string[] inputs = input.Split(' ');
           
            n = ulong.Parse(inputs[0]);
            
            ulong result = 0;
            result = n * (n - 1) / 2 + n;
            Console.WriteLine(result.ToString());
            
        }
    }
}
