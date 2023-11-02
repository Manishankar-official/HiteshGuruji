#include<bits/stdc++.h>
using namespace std;


void PrintA(int *arr,int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
}


int main(){
int arr[] = {2,10,8,7};
int n = sizeof(arr)/sizeof(*arr);
PrintA(arr,n);
}