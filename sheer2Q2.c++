#include<iostream>
using namespace std;

int  countInversion(int a[],int n){
   
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]&&i<j){
                ans++;
            }
        }
    }
    return ans;
}

int main(){
     int a[]={7,2,6,3};
       int ans= countInversion(a,4);
        cout<<ans;
    return 0;
}