// See https://aka.ms/new-console-template for more information
using System;

namespace arrays
{
	class array
	{
		static void Main(string[] args)
		{
			int[] myArray = new int[5];
			myArray[0] = 1;
			myArray[1] = 2;
			myArray[2] = 3;
			myArray[3] = 4;
			myArray[4] = 5;

			Console.WriteLine(myArray[0]);
			Console.WriteLine(myArray[1]);
			Console.WriteLine(myArray[2]);
			Console.WriteLine(myArray[3]);
			Console.WriteLine(myArray[4]);
		}
	}
}

