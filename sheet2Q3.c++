#include<iostream>

using namespace std;
#include<vector>

int kthsmalestNumber(int a[],int n,int k){
    int largestElement=INT_FAST8_MIN;
    for(int i=0;i<n;i++){
            if(a[i]>largestElement){
                largestElement=a[i];
            }
    }

   vector<int>v(largestElement+1,0);
    
    for(int i=0;i<n;i++){
      v[a[i]]=1;
    }

    for(int i=largestElement;i>=0;i--){
        if(v[i]==1){
            k--;
            if(k==0){
                return i;
            }
        }
    }


}

int main(){
       int a[]={3,2,1,5,6,4};
             int ans=  kthsmalestNumber(a,6,2);
             cout<<ans;
    return 0;
}