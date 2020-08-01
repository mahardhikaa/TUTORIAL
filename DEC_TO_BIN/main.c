#include<stdio.h>

int main(){
    int input;
    int i,j;
    int temp = 1;

    printf("\nDEC: ");
    scanf("%d", &input);
    
    printf("BIN:");

    for(i=7; i>=0; i--){
        for(j=1; j<=i; j++){
            temp*=2;
        }
        if(input >= temp){
            printf(" 1 ");
            input-=temp;
        }
        else{
            printf(" 0 ");
        }
        temp = 1;
    }
    printf("\n\n");
}