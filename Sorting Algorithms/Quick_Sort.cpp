/*
-> To visualize go to this link https://visualgo.net/en/sorting
-> There is another website Geeks for Geeks

->  The basic process of quick sort is you choose a pivot from given dataset. 
    It can be the first element or last element or median. Then partition the dataset ex. array according to that pivot.
    Alternatively, If a element is greater than the pivot  then it will go right of the array and if element is smaller 
    than the pivot then it will go left. Then place the pivot into it's right place.
*/

#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[],int low, int high){
  int pivot = arr[high];
  int i = low - 1;
  int j;

  for(j=low;j<high;j++){                            
    if(arr[j]<pivot){                              
      i++;                                          
      swap(&arr[i],&arr[j]);                        
    }                                               
  }                                                 
  swap(&arr[i+1],&arr[high]);
  return (i+1);
}

void quick_sort(int arr[],int low, int high){
  if(low < high){
    int pi = partition(arr,low,high);

    quick_sort(arr,low,pi-1);
    quick_sort(arr, pi+1 , high);
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
  quick_sort(arr,0,n-1);
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
  return 0;
}
