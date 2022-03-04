using System;

namespace ProblemSolving
{
    internal class Program
    {
        private const double PI = 3.141592653;

        static void Main(string[] args)
        {
            string input;
            decimal a,b;
            input = Console.ReadLine();
            string[] inputs = input.Split(' ');
           
            a = decimal.Parse(inputs[0]);
            b = decimal.Parse(inputs[1]);
            
            if (a >= b)
            {
                Console.WriteLine("Yes");
            }
            else
            {
                Console.WriteLine("No");
            }
            
        }
    }
}
