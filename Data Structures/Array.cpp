/*

We all know about array. It's a fundamental data structures for us. So i don't think i have to write something about array. You know the best version of yours.
Useful site: geeksforgeeks.com

*/


#include <bits/stdc++.h>
using namespace std;


/* Insertion */

int insert(int arr[],int index,int value,int n,int capacity){
  if(n>=capacity){
    return n;
  }else{
    int i;
    for(i = n;i>=index;i--){
      arr[i+1] = arr[i];
  }
  arr[index] = value;
  }
  return (n+1);
}

/* Deletion */

int deleteData(int arr[],int index, int n){
  int i;
  int deletedData = arr[index];
  for(i=index;i<n;i++){
    arr[i] = arr[i+1];
  }
  
  return (n-1);
}

/* Getting a value from array */

int get(int arr[],int index){
  return arr[index];
}

/* Pop(delete a element at the end) a element */

int pop(int arr[],int n){
  int popped = arr[n-1];
  return (n-1);
}

/* Pop a element from Front */

int popFront(int arr[],int n){
  int popped = arr[0];
  for(int i = 0; i < n;i++){
    arr[i] = arr[i+1];
  }
  return (n-1);
}

/* Push(insert a element at the end) a element */

int push(int arr[],int value,int n,int capacity){
  if(n>=capacity){
    return n;
  }else{
    arr[n] = value;
    return (n+1);
  }
}

/* Push a element in the front */

int pushFront(int arr[],int value,int n,int capacity){
  if(n>=capacity){
    return n;
  }else{
    int i;
    for(i=n;i>=0;i--){
      arr[i+1] = arr[i];
  }
  arr[0] = value;
  return (n+1);
  }
}




int main(void) 
{
  int arr[20] = {2,3,5,6,7,9};
  int capacity = sizeof(arr)/sizeof(arr[0]);
  int n = 6;

  cout << "Before Insertion: " << endl;
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  n = insert(arr, 2, 100, n,capacity);

  cout << "After Insertion: " << endl;
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  n = deleteData(arr, 2, n);

  cout << "After Deletion: " << endl;
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  n = push(arr, 56,n,capacity);

  cout << "After Push: " << endl;
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  n = pop(arr, n);

  cout << "After Pop: " << endl;
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  n = pushFront(arr, 65, n, capacity);

  cout << "After PushFront: " << endl;
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  n = popFront(arr, n);

  cout << "After PopFront: " << endl;
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  int data = get(arr,3);

  cout << "Get Data: " << endl;
  cout << data << endl;



  
  return 0;
}
	
	

