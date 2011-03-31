using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace _22
{
    class Program
    {
        static void Main(string[] args)
        {
            int count = 0;
            int sum = 0;
            
            StreamReader SR;
            string S;
            SR = File.OpenText("22data.txt");
            S = SR.ReadLine();

            String temp = "";

            for (int x = 0; x < S.Length; x++)
            {
                temp = S.Substring(x, 1);
                if(temp.Equals(","))
                {
                    count++;
                }
            }

            String[] names = new String[count];
            count = 0;


            for (int x = 0; x < S.Length; x++)
            {
                temp = S.Substring(x, 1);
                if(temp.Equals("\""))
                {

                }

                else if(temp.Equals(","))
                {
                    count++;
                }

                else
                {
                    names[count] += S.Substring(x, 1);
                }
            }
            Array.Sort(names);

            int tempSum = 0;

            for (int x = 0; x <= count; x++)
            {
                try
                {
	                for (int y = 0; y < names[x].Length; y++)
	                {
	                    tempSum += (int)names[x][y] - 64;
	                } 
                } 
                catch(Exception NullReferenceException)
                {
                }

                sum += tempSum * (x + 1);
                tempSum = 0;
            }

            Console.WriteLine(sum);

            Console.ReadKey();
        }
    }
}
