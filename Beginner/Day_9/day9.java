/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner read = new Scanner(System.in);
	    int a = read.nextInt();
	    int b = read.nextInt();
	    int x = read.nextInt();
	    int y = read.nextInt();
	    if((a*2 + b) > (x*2 + y)){
	        System.out.println("Messi");
	    }
	    else if((a*2 + b) < (x*2 + y)){
	        System.out.println("Ronaldo");
	    }
	    else{
	        System.out.println("Equal");
	    }
	}
}
