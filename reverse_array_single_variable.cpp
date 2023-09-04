#include<iostream>
using namespace std;


void Reverse(int i,int n,int arr[]){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    Reverse(i+1,n,arr);
}

void Print(int arr[],int n){

for (int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}

void Make(int arr[],int n){
for (int i=0;i<n;i++){
    cin >>arr[i];
}
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    Make(arr,n);
    Reverse(0 ,n ,arr);
    Print(arr,n);     
    return 0;
}