#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Size noted."<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Input Done."<<endl;
    for(int i=0;i<n;i++){
        int c = arr[i],count=0;
        
        for(int j=i;j<n;j++){
            if(c==arr[j]){
                count++;
                arr[j]=-1;
            }
        }
        if(c!=-1){
            cout<<c<<" : ";
            for(int k=0;k<count;k++){
                cout<<"*";
            }
        }
        else{
            continue;
        }
        cout<<endl;
    }
    return 0;
}