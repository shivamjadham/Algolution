#include<iostream>
using namespace std;
#include<vector>
#include<math.h>

int checkMax(vector<int>& v,int i,int j){
    int max=0;
    for(int x=i;x<=j;x++){
        if(v[x]>max){
            max=v[x];
        }
    }
    cout<<"shivam 1="<<max<<endl;
    return max;
}
 
int main(){
    vector<int>v={1,2,3,1,4,5};
    int windowSize=3;
    int max=0;
     vector<int>ans;
       
        max=checkMax(v,0,windowSize-1);
        
        ans.push_back(max);

         int i=1;
         int j=i+windowSize-1;

         while(j<v.size()){
            if(v[i-1]!=max && v[j]<max){
                ans.push_back(max);
                cout<<"shivam 2="<<max<<endl;
            }
            else if(v[i-1]!=max && v[j]>max){
                  max=v[j];
                  ans.push_back(max); 
                  cout<<"shivam 3="<<max<<endl;     
            }
            else if(v[i-1]==max){
               max= checkMax(v,i,j);
               ans.push_back(max);
               cout<<"shivam 14="<<max<<endl;
            }
            i++;j++;
         }

         for(int i=0;i<ans.size();i++){
            cout<<"shivam= "<<ans[i];
         }
    
    return 0;
}