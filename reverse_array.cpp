#include<iostream>
using namespace std;


void Reverse(int l ,int r ,int arr[]){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    Reverse(l+1,r-1,arr);
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
    Reverse(0 ,n-1 ,arr);
    Print(arr,n);     
    return 0;
}