#include<iostream>
using namespace std;

#include<stack>

  bool checkValid(string s){
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(st.empty()==true&&i==s.size()){
            return true;
        }
        
        else if(st.empty()==true && s[i]==')'){
            return false;
        }
        else if(s[i]==')') {
            st.pop();
        }
        else{
            st.push(s[i]);
        }
        
    }
  }
 
int main(){
    string s="()()())";
   if(checkValid(s)){
    cout<<"true";
   }else{
    cout<<"false";
   }

    return 0;
}