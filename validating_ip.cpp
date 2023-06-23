#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    string ip;
    cout<<"Enter a IP Address: ";
    cin>>ip;
    int l = ip.length();
    if(l>15){
        cout<<"Invalid IP Address.1"<<endl;
    }
    
    else{
        regex ipv4("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])");
        if(regex_match(ip,ipv4)){
            cout<<"Valid IP Address"<<endl;
        } 
        else{
            cout<<"Invalid IP Address.2"<<endl;
        }
    }
    
}