
# MY CP JOURNEY

This the diary of me learning competitive programming 
algorithms and problem solving methods


## My Repertoire


| Algorithm | Time Complexity    | Purpose                |
| :-------- | :------- | :------------------------- |
| `Prefix sum` | `O(N^2)` | Range Sum of a given array etc.|
| `Two Pointers`      | `O(N)` | 2SUM Problem, Subarray Sum|


### Prefix Sum

Given an array arr[] of size n, its prefix sum array is 
another array prefixSum[] of the same size, 
such that the value of 
prefixSum[i] is arr[0] + arr[1] + arr[2] … arr[i].

```
  void prefixSum(int arr[0], int n, int prefixSum[0]){
      prefixsum[0] = arr[0];
      for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
  }
```

## Two Pointers

The algorithm basically uses the fact that the input array is sorted. We start the sum of extreme values (smallest and largest) and conditionally move both pointers. We move left pointer ‘i’ when the sum of A[i] and A[j] is less than X. We do not miss any pair because the sum is already smaller than X. Same logic applies for right pointer j.

```
  int isPairSum(int A[], int N, int X)
{
    // represents first pointer
    int i = 0;
    // represents second pointer
    int j = N - 1;
    while (i < j) {
        // If we find a pair
        if (A[i] + A[j] == X)
            return 1;
        // If sum of elements at current
        // pointers is less, we move towards
        // higher values by doing i++
        else if (A[i] + A[j] < X)
            i++;
        // If sum of elements at current
        // pointers is more, we move towards
        // lower values by doing j--
        else
            j--;
    }
    return 0;
}
```