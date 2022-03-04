using System;

namespace ProblemSolving
{
    internal class Program
    {
        private const double PI = 3.141592653;

        static void Main(string[] args)
        {
            string input;
            int n;
            input = Console.ReadLine();
            string[] inputs = input.Split(' ');
           
            n = int.Parse(inputs[0]);
            
            long result = 0;
            for (int i = 1; i <= n; i++)
            {
                result += i;
            }
            Console.WriteLine(result.ToString());
            
        }
    }
}
