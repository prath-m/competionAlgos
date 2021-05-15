/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner input = new Scanner(System.in);
		double X, A, B;
		int T;
		
		T = input.nextInt();
		
	   for(int i=0; i<T; i++){
	      X = input.nextInt();
		   A = input.nextInt();
		   B = input.nextInt();
		   
		   while(X != 100){
		      A += B;
		      X++;
		   }
		   A *= 10;
		   System.out.printf("%.0f", A);
		   System.out.print("\n");
	   }
	   
	}
}

/*
y=yes
Inputs:
X - Temperature
A - Solutbility
B - Increase of solubility
if(X++) == A+B
*/
