#include<iostream>
using namespace std;

      bool isPlaindrome(string s){      // time complexity    O(n) and space complacity O(1);
            int i=0;
            int j=s.size()-1;

            while(i<=j){
            if(s[i]!=s[j]){
                 return false;
            }
                   i++;
                   j--;
            }
            return true;
      }

 bool phrase(string s){
    string b;
    for(int i=0;i<s.size();i++){
        int a=s[i];
     if(a>=65&&a<=96){
        b+=(char)(a+32);
     }
     else if(a>=97&&a<=122){
            b+=(char)(a);
     }
    }

        if(isPlaindrome(b)){
            return true;
        }
    return false;
 }
int main(){
    string s="A man, a plan, a canal : Panama";
    string z="race a car";
if(phrase(s)){
    cout<<"true";
}else{
    cout<<"false";
}

    return 0;
}