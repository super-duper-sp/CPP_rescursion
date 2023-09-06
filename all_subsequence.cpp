#include<iostream>


using namespace std;

void sub(int v[],vector<int> &su,int index ,int n){

    if(index==n){
        for(int i=0 ; i<su.size();i++){
            cout<<su[i];
        }
        cout<<endl;
        return;
    }
    su.push_back(v[index]);
    sub(v,su,index+1,n);
    su.pop_back();
    sub(v,su,index+1,n);
   

}

int main()
{
    int v[]= {3,1,2};
    vector<int> su;
    int n=3;

    sub(v,su,0,3);

    return 0;
}