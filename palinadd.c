#include<stdio.h>

int palindrome(int x){
    int res,rev=0;
    while(x!=0){
        res = x%10;
        rev = rev*10+res;
        x = x/10;
    }
    return rev;
}

int palin(int x,int x1){
    if(x==x1){
        printf("It is Palindrome\n");
        return 1;
    }
    else{
        printf("It is not a Palindrome\n");
        return 0;
    }
}

int main(){
    int n,x,sum,count=5;
    printf("Enter 2 or 3 digit number: ");
    scanf("%d",&n);
    x = palindrome(n);
    printf("Number: %d\n",n);
    printf("Reverse: %d\n",x);
    sum = x+n;
    printf("First Sum: %d\n",sum);
    if(palindrome(sum)==sum){
        printf("It is a Palindrome\n");
    }
    else{
        int x1,n1,sum1;
        while(count!=0){
            sum1 = sum;
            printf("Number: %d\n",sum1);
            x1 = palindrome(sum);
            printf("Reverse: %d\n",x1);
            sum = x1+sum;
            printf("%d Sum: %d\n",count,sum);
            count--;
            if(palin(sum1,sum)){
                break;
            }
            else{
                continue;
            }
            printf("\n");
        }
        
    }
}