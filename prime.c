#include<stdio.h>
int main(){
    int n,flag=0,i;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i = 2;i <= n/2;++i){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("%d is a Prime",n);
    }
    else{
        printf("%d is not a Prime",n);
    }
    return 0;
}