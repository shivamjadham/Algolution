#include<iostream>
using namespace std;

bool isExistPair(int a[],int n,int x){
    int i=0; int j=n-1;
    while(i<j){
        if(a[i]+a[j]==x){
            cout<<"pair is "<<a[i]<<" and "<<a[j];
            return true;
        }
        else if(a[i]+a[j]>x){
            j--;
        }
        else if(a[i]+a[i]<x){
            i++;
        }
    }
    return false;
}
int main(){
    int a[]={1,2,4,5,7,11};
    cout<<endl<<isExistPair(a,7,9);
    return 0;

}