import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    int cnt = 0;
		    for(int i=0 ; i<n ; i++){
		        int val = sc.nextInt();
		      cnt = cnt^val;
		    }
		    System.out.println(cnt);
		}
	}
}
