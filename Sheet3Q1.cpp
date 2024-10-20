#include<iostream>
using namespace std;
#include<vector>
#include<math.h>

int  numberDivide(int num){
    int ans;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    bool flag=true;
    for(int i=2;i<num;i++){
        if(num%i==0){
        int a = sqrt(i);
        if(a*a!=i){
            v1.push_back(i);
        }
        else{
          v2.push_back(i);
        }
        }
    }

   for(int i=0;i<v1.size();i++){
    for(int j=0;j<v2.size();j++){
        if(v1[i]%v2[j]==0){
            flag=false;
        }
    }
      if(flag==true){
        v3.push_back(v1[i]);
        cout<<v1[i]<<endl;
      }
   }
    
  return  v3.size();
}

int main(){
    int num;
    cout<<"enter number";
    cin>>num;

      int ans = numberDivide(num);
      
      cout<<"ans is "<<ans;

    return 0;
}