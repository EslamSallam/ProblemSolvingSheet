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
            int a;
            input = Console.ReadLine();
            string[] inputs;
        
            a = int.Parse(input);
            int year = a / 365;
            a = a%365;
            int month = a / 30;
            a = a%30;
            int day = a;
            Console.WriteLine(year + " years\n" + month + " months\n" + day + " days\n");

        }
    }
}
