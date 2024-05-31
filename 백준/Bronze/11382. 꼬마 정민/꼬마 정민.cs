using System.Threading.Channels;

namespace mingmingpower
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split(' ');
            long[] num = new long[3];

            long temp = 0;

            for(int i = 0; i < 3; i++)
            {
                num[i] = long.Parse(s[i]);
                temp += num[i];
            }

            Console.WriteLine(temp);
        }
    }
}
