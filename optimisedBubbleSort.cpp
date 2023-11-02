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

void bubblesort(int *arr,int n){
      bool isSwap = false;
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1;j++){
      if(arr[j]>arr[j+1]){
        swap(&arr[j],&arr[j+1]);
        isSwap = true;
      }

      }
      if(isSwap == false){
        break;
      }
    }
  }



int main(){
int arr[] = {2,10,8,7};
int n = sizeof(arr)/sizeof(*arr);
cout<<"before swapping ::::"<<endl;
PrintA(arr,n);
cout<<endl;
cout<<"After swapping::::"<<endl;
bubblesort(arr,n);
PrintA(arr,n);
}