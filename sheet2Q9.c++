#include<iostream>
using namespace std;

    int stock(int a[],int n){
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(ans<a[j]-a[i]){
                      ans=a[j]-a[i];
                }
            }
        }
        return ans;

    }
int main(){
      int price[]={7,1,5,3,6,4};

          cout<<stock(price,6);
        
    return 0;
}