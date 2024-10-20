#include<iostream>
#include<vector>
using namespace std;
 int slidingWindow(int a[],int n,int k){
          int x=0;
         vector<int>v;
          int sum=0;
          int ans=0;
          for(int i=0;i<n;i++){
           sum+=a[i];
         v.push_back(sum);
          }
              ans=v[k-1]   ; 
          for(int i=1;i<=n-k;i++){
           int  sum1=v[i+k-1]-v[i-1];
          
           if(ans<sum1){
            ans=sum1;
           }
          }
          return ans;
 }
int main(){
    int a[]={100,200,300,400};
   cout<< slidingWindow(a,4,2);
    return 0;
}