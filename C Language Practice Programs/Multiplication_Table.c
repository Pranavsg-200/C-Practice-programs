#include<stdio.h>

int main(){
    int num;
    printf("\nEnter the value of number whose multiplication table is to be printed: ");
    scanf("%d", &num);
    printf("\nThe multiplication table of %d is:\n", num);
    for(int i = 0; i < 10; i++){
        printf("\n%d X %d = %d\n\n", num, i + 1, (i + 1) * num);
    }
    return 0;
}