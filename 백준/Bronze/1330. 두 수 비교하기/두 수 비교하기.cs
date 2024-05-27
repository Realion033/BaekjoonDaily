using System;

namespace _10320_장정민0413
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] a = Console.ReadLine().Split(' ');
            int A = int.Parse(a[0]);
            int B = int.Parse(a[1]);
            if (A > B)
            {
                Console.WriteLine(">");
            }
            if (A < B)
            {
                Console.WriteLine("<");
            }
            if(A == B)
            {
                Console.WriteLine("==");
            }
        }
    }
}
