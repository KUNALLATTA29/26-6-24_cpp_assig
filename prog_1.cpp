#include<bits/stdc++.h>
using namespace std;

map<string,double> sol(vector<int> arr){
    
    double cp,cn,cz;
    double n=arr.size();
    
    for(auto it:arr){
        if(it>0){
            cp++;
        }else if(it<0){
            cn++;
        }else{
            cz++;
        }
    }
    map<string,double> ans;
    ans["+ve"]=cp/n;
    ans["-ve"]=cn/n;
    ans["zero"]=cz/n;
    
    
    return ans;
    
}

int main(){
    
    vector<int> arr = {-1,2,3,0,-5,-2,0,0,3,-1,0};
    map<string,double> ans = sol(arr);
    for(auto it:ans){
        cout<<it.first<<" = "<<it.second<<endl;
    }
    
    
    return 0;
}