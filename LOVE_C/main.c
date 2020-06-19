#include<stdio.h>

int main(){
    int pttrn;
    int i,j;

    printf("Enter The Number of Pattern: ");
    scanf("%d", &pttrn);
    printf("\n");
    
    int plus=(2*pttrn)+4;

    for(i=1; i<=plus; i++){
        if(i==1||i==pttrn+2||i==pttrn+3||i==pttrn+4){
            printf(" ");
        }
        else{printf("*");}
    }
    printf("\n");

    for(i=1; i<=plus+1; i++){
        if(i==(plus/2)+1){printf(" ");}
        else{printf("*");}
    }
    printf("\n");

    for(i=0; i<pttrn+3; i++){
        for(j=i+pttrn; j>pttrn; j--){printf(" ");}
        for(j=(plus+1)-(i*2); j>0; j--){printf("*");}
        printf("\n");
    }
}