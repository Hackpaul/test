#include<stdio.h>

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

// n1 ,n2 is removed 

void main(){
    printf("Number 1 : ");
    scanf("%d",&n1);
    printf("\nNumber 2 : ");
    scanf("%d",&n2);
    printf("Result : %d",add(n1,n2));
}
