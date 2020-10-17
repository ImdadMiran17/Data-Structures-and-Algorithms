#include <bits/stdc++.h>
using namespace std;

// PROCESS 1

void bubble_sortp1(int b[],int n){
  int i,j,temp;
  for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){                         // go to this link for visualising this process https://visualgo.net/en/sorting
        if(b[j]>b[j+1]){
          temp = b[j];
          b[j] = b[j+1];
          b[j+1] = temp;
        }
    }
  }
}

// PROCESS 2

void bubble_sortp2(int arr[],int n){
  bool swapped ;
  int temp;
  do{
    swapped = false;
    for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1]){                       // go to this link for visualising this process https://visualgo.net/en/sorting
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;

        swapped = true;
      }
    }
  }while(swapped);

}


int main(void) 
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  bubble_sortp1(arr, n);
  bubble_sortp2(arr, n);
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
  return 0;
}
	
	

