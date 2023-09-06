#include<iostream>
using namespace std;

bool sub(int arr[],vector <int> &su,int n,int k,int index,int count){
    
    if(index==n){
    
    //condition satisfied
            if(k==count){
              for(int i=0;i<su.size();i++){
                   cout<<su[i];
                }
                cout<<endl;
                return true;
            }
            //condition not satisfied
            else   return false;
        
    }
    su.push_back(arr[index]);
    count=count+arr[index];
    if(sub(arr,su,n,k,index+1,count)==true){
        return true;
    }

  count=count-arr[index];
    su.pop_back();
    if(sub(arr,su,n,k,index+1,count)==true){
        return true;
    }

    return false;
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