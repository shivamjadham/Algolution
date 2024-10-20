#include<iostream>
using namespace std;
#include<vector>
 int equlibriumIndex(int a[],int n){
    int sum=0;
    vector<int>v;
    for(int i=0;i<n;i++){
        sum+=a[i];
            v.push_back(sum);
    }
    int totalSum=v[v.size()-1];
    for(int i=1;i<v.size();i++){
        if(v[i-1]==totalSum-v[i]){
            return i;
        }
    }
    return -1;
 }
int main(){
    int a[]={-7,1,5,2,-4,3,0};
       cout<<equlibriumIndex(a,7)+1;
    return 0;
}