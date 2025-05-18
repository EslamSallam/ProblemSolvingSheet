using System;
using System.Collections.Generic;

namespace ProblemSolving
{
    internal class Program
    {
        private const double PI = 3.141592653;
        // LeetCode - 223. Rectangle Area
        static void Main(string[] args)
        {
            Solution sl = new Solution();
            int area = sl.computeArea(32, 32, 43, 56, 45, 23, 4, 5);
            Console.WriteLine(area);
        }
    }
}
