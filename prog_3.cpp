#include<bits/stdc++.h>
using namespace std;

bool isodd(int b){
    if(b%2!=0){
        return true;
    }
    return false;
}

bool isprime(int b){
    if(b<=1){
        return false;
    }
    for(int i=2;i<=sqrt(b);i++){
        if(b%i==0){
            return false;
        }
    }
    return true;
}

bool ispower(int a){
    if(a<=0){
        return false;
    }
    while(a%2==0){
        a/=3;
    }
    return a == 1;
}

void sol1(vector<int> arr1, vector<int> arr2){
    int a=0,b=0;
    for(int i=0;i<arr1.size();i++){
        if(arr1[i]>arr2[i]){
            a++;
        }else if(arr1[i]<arr2[i]){
            b++;
        }
    }
    
    if(a>b){
        cout<<"arr1 wins";
    }else if(b>a){
        cout<<"arr2 wins";
    }else{
        if(isodd(b) && isprime(b)){
            cout<<"arr2 wins";
        }else{
            if(!isodd(a) && ispower(a)){
                cout<<"arr1 wins";
            }else{
                cout<<"arrw wins";
            }
        }
    }
}

int main(){
    
    vector<int> arr1 = {15,25,36};
    vector<int> arr2 = {25,36,78};
    
    sol1(arr1,arr2);
    
    return 0;
}