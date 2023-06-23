#include<stdio.h>
int main(){
    int n,i,j,temp;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter ELements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c;
    for(i=0;i<n;i++){
        if(arr[i]==0){
            c = arr[i];
            for(j=i-1;j>=0;j--){
                
                arr[j+1] = arr[j];
                
            }
            arr[0] = c;
        }
        else{
            continue;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}