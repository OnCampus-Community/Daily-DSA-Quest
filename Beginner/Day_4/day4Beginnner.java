import java.util.*;
public class Main {
	
	public static void main(String[] args) {
		// Write your code here
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int oddSum = 0,evenSum=0;
		while(a>0){
			int rem = a%10;
			if(rem%2==0){
				evenSum+=rem;
			}else{
				oddSum+=rem;
			}
			a = a/10;
		}
		System.out.println(evenSum+" "+oddSum);
	}
}
