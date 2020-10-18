#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r){
  int n1 = m-l+1;
  int n2 = r - m;
  int L[n1] , R[n2];

  for(int i=0;i<n1;i++){
    L[i] = arr[l + i];
  }
  for(int j=0;j<n2;j++){
    R[j] = arr[m+1+j];               // Go to this link for clearing your doubt https://visualgo.net/en/sorting
  }                                  // It's divide and conquer method. Continuously divide the array until each element of the array is separated And then merge them.
                                     // Go to this link for reminding time and space complexity https://www.bigocheatsheet.com/
  int i=0,j=0,k=l;

  while(i<n1 && j<n2){
    if(L[i]<=R[j]){
      arr[k] = L[i];
      i++;
    }else{
      arr[k] = R[j];
      j++;
    }
    k++;
  }
  while(i<n1){
    arr[k] = L[i];
    i++;
    k++;
  }
  while(j<n2){
    arr[k] = R[j];
    j++;
    k++;
  }
}

void merge_sort(int arr[], int l, int r){
 if(l<r){
    int m = l + (r - l)/2;

    merge_sort(arr, l, m);
    merge_sort(arr, m+1 , r);

    merge(arr, l, m, r);
 }
}

int main(void) 
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  merge_sort(arr,0,n-1);
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
  return 0;
}
