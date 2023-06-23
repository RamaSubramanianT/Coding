#include<stdio.h>
int main(){
    int n,col;
    int i,j;
    printf("Enter a size: ");
    scanf("%d",&n);
    col = n*2+1;
    for(int i=0;i<n;i++){
        printf("  ");
    }
    printf("0\n");
    int count = 1,k = 1;
    for(i=n;i>0;i--){
        for(j=0;j<n-k;j++){
            printf("  ");
            
        }
        k++;
        while(j>=0 && j<n){
            printf("%d ",j+1);
            j++;
        }
        printf("0 ");
        
        
        for(j=n;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
    
}