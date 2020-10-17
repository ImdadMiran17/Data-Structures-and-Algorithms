#include <bits/stdc++.h>
using namespace std;


void insertion_sort(int arr[],int n){
  int i,j,key;
  
  for(i=1;i<n;i++){
    key = arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key){                       // go to this link for visualizing this process https://visualgo.net/en/sorting
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;
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
  insertion_sort(arr, n);
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
  return 0;
}
	
	

