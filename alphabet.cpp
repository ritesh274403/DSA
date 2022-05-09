#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"this is lowercse";
    }
    else if(ch>='A'&&ch<='Z'){
        cout<<"this is uppercase";
    }
    else{
        cout<<"this is numeric value";
    }
}