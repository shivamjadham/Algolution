#include<iostream>
using namespace std;
#include<stack>

 bool checkValid(string s){
         stack<char>st;
         for(int i=0;i<s.size();i++){

            if(st.empty()!=false && i==s.size()){
                 
                return false;
            }
           else if(st.empty()==true && i==s.size()){
             
                return true;
            }
            else if(st.empty()==true && (s[i]==')'||s[i]=='}'||s[i]==']')){
             
                return false;
            }
            else if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else{
                char c=st.top();
                char d=s[i];
                if( c=='(' && d==')'){
                    st.pop();
                }
                else if((c=='{') && (d=='}')){
                         st.pop();
                }
                else if((c=='[') && (d==']')){
                    st.pop();
                }
                else{
                    cout<<c<<" "<<s[i];
                   
                    return false;
                    
                }
            }
         }
  }
int main(){
    string s="()(){}{{}}[[]]";

    if(checkValid(s)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}