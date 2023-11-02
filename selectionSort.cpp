#include<bits/stdc++.h>
using namespace std;

void PrintA(int *arr,int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
}

void swap(int *a,int *b){
  int temp = *a;
  *a = *b;
  *b=temp;
}

void selectionsort(int *arr,int n){
  int i=0;
  int min;
    while(i<n-1){
      min=arr[i];
     for(int j=i;j<n;j++){
      if(min<arr[j]){
        swap(&arr[j],&arr[i]);
      }
     }
     i++;
    }
        
}

int main(){
int arr[] = {2,10,8,7};
int n = sizeof(arr)/sizeof(*arr);
cout<<"before swapping ::::"<<endl;
PrintA(arr,n);
cout<<endl;
cout<<"After swapping::::"<<endl;
selectionsort(arr,n);
PrintA(arr,n);
}