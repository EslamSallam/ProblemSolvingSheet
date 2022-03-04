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
            
            int floor = (int)Math.Floor(a / b);
            int ceil = (int)Math.Ceiling(a / b);
            int round;
            double val = ((double)((a / b) - floor));
            if (val < 0.5)
            {
                round = floor;
            }
            else
            {
                round = ceil;
            }

            Console.WriteLine("floor " + a.ToString() + " / " + b.ToString() + " = " + floor.ToString());
            Console.WriteLine("ceil " + a.ToString() + " / " + b.ToString() + " = " + ceil.ToString());
            Console.WriteLine("round " + a.ToString() + " / " + b.ToString() + " = " + round.ToString());
            
        }
    }
}
