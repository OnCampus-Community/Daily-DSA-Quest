import java.util.* ;
import java.io.*; 
public class Solution 
{
    
    public static void sort012(int[] arr)
    {
        //Write your code here
        int start =0, mid = 0, end = arr.length-1;
        while(mid<=end) {
            if(arr[mid] == 0) {
                int temp = arr[mid];
                arr[mid] = arr[start];
                arr[start] = temp;
                start++; mid++;
            }
            else if(arr[mid] == 1)
            mid++;
            else {
                int temp = arr[mid];
                arr[mid] = arr[end];
                arr[end] = temp;
                end--;
            }
            
        }
    }
}
