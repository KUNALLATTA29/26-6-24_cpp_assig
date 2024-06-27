#include<bits/stdc++.h>
using namespace std;

int sol(set<int> arr1, set<int> arr2){
    int ans = 0;
    for(auto it:arr1){
        if(arr2.find(it)!=arr2.end()){
            ans++;
        }
    }
    return ans;
}

int main(){
    
    vector<int> arr = {1,2,3,4,0,-3,-2,0};
    
    int c=0;
    for(auto it:arr){
        if(it>0){
            c++;
        }
    }
    
    if(c%2==0){
        set<int> arr1 = {1,2,3,4,5,6};
        set<int> arr2 = {5,6,4,8};
        cout<<sol(arr1,arr2);
    }else{
        cout<<"c is not even";
    }
    
    return 0;
}