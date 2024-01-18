
import java.util.*;
public class Solution
{
public static int minSubarraySum(ArrayList<Integer> arr, int n, int k)
    {
        int minSum = 1000000000;
        for (int i = 0; i <= n - k; i++)
        {
           int sum = 0;
            for (int j = i; j < i + k; j++)
           {
               sum += arr.get(j);
            }
            minSum = Math.min(minSum, sum);
        }
        return minSum;
    }
}
