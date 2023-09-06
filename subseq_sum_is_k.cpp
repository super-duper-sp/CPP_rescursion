#include<iostream>
using namespace std;

void sub(int arr[],vector <int> &su,int n,int k,int index,int count){
    
    if(index==n){
        
            if(k==count){
              for(int i=0;i<su.size();i++){
                   cout<<su[i];
                }
                cout<<endl;
                
            }
            return;
        
    }
    su.push_back(arr[index]);
    count=count+arr[index];
    sub(arr,su,n,k,index+1,count);

  count=count-arr[index];
    su.pop_back();
    sub(arr,su,n,k,index+1,count);
}

int main()
{
    int  arr[3]={1,2,1};
    int n=3;
    int k=2;
    vector <int> su;
    int count;
    sub(arr,su,n,k,0,count);
}