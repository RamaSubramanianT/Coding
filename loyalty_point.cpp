#include<iostream>

using namespace std;

int main(){
    int lp=0,tlp=0,amt,temp;
    cout<<"Enter purchase amount: "<<endl;
    cin>>amt;
    while(amt>0){
        if(amt>=5000){
            temp = amt/5000;
            tlp = tlp + temp*15;
            amt = amt%5000;
        }
        else if(amt>=1000){
            temp = amt/1000;
            tlp = tlp + temp*7;
            amt = amt%1000;
        }
        else if(amt>=500){
            temp = amt/500;
            tlp = tlp + temp*5;
            amt = amt%500;
        }
        else if(amt>=100){
            temp = amt/100;
            tlp = tlp + temp*1;
            amt = amt%100;
        }
        
    }
    cout<<"Loyalty point: "<<tlp<<endl;
}