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
            ulong a,b,c,d;
            input = Console.ReadLine();
            string[] inputs = input.Split(' ');

            a = ulong.Parse(inputs[0]);
            b = ulong.Parse(inputs[1]);
            c = ulong.Parse(inputs[2]);
            d = ulong.Parse(inputs[3]);

            if ( a > 1000)
            {
                a = a % 1000;
            }
            if ( b > 1000)
            {
                b = b % 1000;
            }
            if ( c > 1000)
            {
                c = c % 1000;
            }
            if ( d > 1000)
            {
                d = d % 1000;
            }
            double res = (a * b * c * d) / 100.0;
            long digits = (long)(a * b * c * d) / 100;
            double perci =Math.Round(res - digits,2);
            int output = (int)(perci * 100);
            Console.WriteLine(output);
        }
    }
}
