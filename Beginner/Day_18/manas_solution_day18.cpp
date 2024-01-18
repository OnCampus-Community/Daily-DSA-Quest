#include <bits/stdc++.h>
int minSubarraySum(int arr[], int n, int k) {
  if (n < k)
    return -1;

  int Min = INT_MAX;
  int sum = 0;

  for (int i = 0; i < k; i++)
    sum += arr[i];

  Min = min(sum, Min);

  for (int i = k; i < n; i++) {
    sum = sum - arr[i - k] + arr[i];
     Min = min(Min, sum);
  }
  return Min;
}
