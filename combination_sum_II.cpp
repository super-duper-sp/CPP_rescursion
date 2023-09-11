#include<iostream>
using namespace std;

void findCombination(int index,int target,vector<int> ds,int v[],int n){
    
    if(target==0){
        for(int i=0;i<ds.size();i++){
            cout<<ds[i];
             }
             cout<<endl;
        
        return;
    }

    for(int i=index;i<n;i++){
        if(i>index && v[i]==v[i-1])continue;
        if(v[i]>target)break;

        ds.push_back(v[i]);
        findCombination(index+1,target-v[i],ds,v,n);
        ds.pop_back();
    }
     

}
int main()
{
    int v[]= {1,1,1,2,2};
    int target =4;

    vector <int> ds;
    
    findCombination(0,target,ds,v,4);
 
    return 0;
}