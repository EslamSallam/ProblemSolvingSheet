﻿using System;

namespace ProblemSolving
{
    public class Solution
    {
        public int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
        {
            int areaA = (ax2 - ax1) * (ay2 - ay1);
            int areaB = (bx2 - bx1) * (by2 - by1);

            int overlapWidth = Math.Max(0, Math.Min(ax2, bx2) - Math.Max(ax1, bx1));
            int overlapHeight = Math.Max(0, Math.Min(ay2, by2) - Math.Max(ay1, by1));
            int overlapArea = overlapWidth * overlapHeight;

            return areaA + areaB - overlapArea;
        }
    }
}
