#include <bits/stdc++.h>
using namespace std;

int linearSearch(int n, int arr[],int k){
  int ans = -1;
  for(int i = 0 ; i < n ; i++){
    if(arr[i]==k){
      ans = i;
      return ans;
    }
  }
  return ans;
}

int binarySearch(int s,int e, int arr[], int k){
  //the array must be sorted to use this algorithm
  //for this we will be assuming that the array is already sorted
  while(s<e){
    int mid = s + (e-s)/2;
    if(arr[mid]==k){
      return mid;
    }
    if(arr[mid]<k){
      s=mid+1;
    }
    else{
      e=mid;
    }   
  }
  return e;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0; i < n ; i++){
    cin>>arr[i];
  }
  int k;
  cout<<"Enter the number you want to search"<<endl;
  cin>>k;

  int num=0;
  cout<<"Which searching algorithm do you want to use? 1-Linear Search , 2 - Binary Search"<<endl;
  cin>>n;
  if(n==1){
  //Linear Search
  cout<<linearSearch(n,arr,k)<<endl;
  }
  if(n==2){
  //Binary Search
  cout<<binarySearch(0,n-1,arr,k)<<endl;
  }
  else{
    cout<<"Invalid option!";
  }
  return 0;
}

