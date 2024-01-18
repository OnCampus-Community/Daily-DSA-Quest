import java.util.* ; 
import java.io.*;  
public class Solution {    
     public static String maximumDifference(int n, int[] arr) {       

          // Write your code here.         
         int min = arr[0];        
        int max = arr[0];
        for(int i = 1;i<n;i++){           
             if(arr[i]<min){                
                min = arr[i];          
            }
             if(arr[i]>max){ 
                max = arr[i];            
            }       
 }       
 int ans = max-min;        
if(ans%2==0){            
    return "EVEN";        
 }else{           
 return "ODD";        
    }   
  } 
}
