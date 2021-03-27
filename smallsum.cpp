//small sum nlogn approach 
//check for duplicate approach

#include <bits/stdc++.h>
  using namespace std;
  int findDuplicate(int arr[], int n, int k)
{

    sort(arr, arr + n);

    int i = 0;
    while (i < n) {
        int j, count = 1;
        for (j = i + 1; j < n && arr[j] == arr[i]; j++)
            count++;
  
        if (count == k)
            return arr[i];
  
        i = j;
    }
  
    return -1;
}
  int main()
  {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<findDuplicate(arr,n,k)<<endl;
    return 0;
  }
