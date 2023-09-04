
#include<iostream>
using namespace std;


void f(int i,int n){

    if(i>n){
        return;
    }
   
    f(i+1,n);
    cout<<i<<endl;

    

}

int main()
{
    int n;
    cin>>n;
    int i;
    f(i,n);
    return 0;
}