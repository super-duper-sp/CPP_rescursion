#include<iostream>
using namespace std;

void findCombination(int index,int target,vector<int> ds,int v[],int n){
    
    if(index==n){
        if(target==0){
             for(int i=0;i<ds.size();i++){
    cout<<ds[i];
             }
             cout<<endl;
        }
        return;
    }

    if(v[index]<=target){
        ds.push_back(v[index]);
        findCombination(index,target-v[index],ds,v,n);
        ds.pop_back();
    }
findCombination(index+1,target,ds,v, n);

}
int main()
{
    int v[]= {2,3,6,7};
    int target =7;

    vector <int> ds;

    findCombination(0,target,ds,v,4);
 
    return 0;
}