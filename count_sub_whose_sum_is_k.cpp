
#include<iostream>
using namespace std;
int sub(int arr[],int n, int k,int index,int sum){

if(sum>k) return 0;

if(index==n){
    if(sum==k){
        return 1;
    }
    else return 0;
}

sum=sum+arr[index];
int left = sub(arr,n,k,index+1,sum);
sum=sum-arr[index];
int right = sub(arr,n,k,index+1,sum);

return left+right;

}


int main()
{
    int  arr[3]={1,2,1};
    int n=3;
    int k=2;

    cout<<sub(arr,n,k,0,0);
}