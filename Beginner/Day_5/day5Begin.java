import java.io.*;
import java.util.* ;

public class Solution {
    public static void setZeros(int a[][]) {
        // Write your code here..
        int n = a.length;
        int m = a[0].length;
        boolean row = false;
        boolean col = false;
        for(int i = 0; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(a[i][j] == 0){
                    if(i == 0)row = true;
                    if(j == 0)col = true;
                    a[0][j] = 0;
                    a[i][0] = 0;
                }
            }
        }
        for(int i = 1 ; i < n ;i++){
            for(int j = 1; j < m ; j++){
                if(a[i][0] == 0 || a[0][j] == 0)a[i][j] =0;
            }
        }
        if(row){
            for(int i = 0 ; i < m ; i++){
                a[0][i] =0;
            }
        }
        if(col){
            for(int i =0 ; i < n ; i++){
                a[i][0] =0;
            }
        }
    }
}
