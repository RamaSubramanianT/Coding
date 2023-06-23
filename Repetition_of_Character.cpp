#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    string in,out;
    cout<<"Enter string: "<<endl;
    getline(cin,in);
    cout<<in<<endl;
    
    for(int i=0;i<in.length();i++){
        char c = in[i];
        int count = 0;
        for(int j=i;j<in.length();j++){
            if(c == in[j]){
                count++;
                in[j] = '-';
            }
        }
        if(c!='-')
            cout<<"The repetition of character: "<<c<<" is : "<<count<<endl;
    }
}