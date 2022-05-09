#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        //if divided by 2 then it is not prime number
        if(n%i==0){
            cout<<"not prime for"<<i<<" "<<endl;
        }
        else{
            cout<<"prime for"<<i<<" "<<endl;
        }
        i=i+1;
    }
}