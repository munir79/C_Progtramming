#include<stdio.h>
int main(){
    int num,i;
    printf(" enter a number:");
    scanf("%d",&num);
    printf("Your given  number is :%d\n",num);
    if(num>1){
        for(i=0;i<=20;i++){
            printf("%d\n",i);
        }  
    }
    else{
        printf("sorry");
    }


}