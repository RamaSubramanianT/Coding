#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    char in[n];
    printf("Enter elements: ");
    scanf("%s",in);
    i = atoi(in);
    printf("%d",i);
    
}