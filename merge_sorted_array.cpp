#include<iostream>

using namespace std;

void display(int *a,int l){
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n,m,i,j,l,temp;
    cout<<"Enter 1st and 2nd array size: ";
    cin>>n>>m;
    l = n+m;
    int arr1[l],arr2[m];
    cout<<"Enter 1st array Element: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(j=i;j<l;j++){
        arr1[j] = 0;
    }
    cout<<"1st Array is: "<<endl;
    display(arr1,l);
    cout<<"Enter 2nd array Element: "<<endl;
    for(i=0;i<m;i++){
        cin>>arr2[i];
    }
    display(arr2,m);
    j = 0;
    for(i=n;i<l;i++){
        arr1[i] = arr2[j];
        j++;
    }
    cout<<"Merged array: "<<endl;
    display(arr1,l);
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            if(arr1[j]>arr1[j+1]){
                temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }
    cout<<"Sorted Array: "<<endl;
    display(arr1,l);
}