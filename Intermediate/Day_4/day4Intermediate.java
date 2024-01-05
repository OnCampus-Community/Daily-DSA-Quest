import java.util.*;
 
public class gouravSol {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int[] ans = new int[t];
        for (int i = 0; i < t; i++) {
            ans[i] = -1;
            int n = sc.nextInt();
            int[] count = new int[n];
            int[] arr = new int[n];
            for (int j = 0; j < n; j++) {
                arr[j] = sc.nextInt();
                count[arr[j] - 1]++;
            }
            int min = Integer.MAX_VALUE;
            for (int j = 0; j < n; j++) {
                if(count[arr[j] - 1] == 1) {
                    if(arr[j] < min) {
                        min = arr[j];
                        ans[i] = j + 1;
                    }
                }
            }
        }
        for(int e: ans) System.out.println(e);
 
    }
}
