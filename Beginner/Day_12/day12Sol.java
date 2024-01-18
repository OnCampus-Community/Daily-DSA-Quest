import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int a = sc.nextInt();
		    if(a%2==0){
		        System.out.println(a/2+" "+a);
		    }
		    else{
		        System.out.println((a+1)/2 + " "+a);

		    }
		}

	}
}
