#include<stdio.h>

int main(){
    int n, sum = 0;
    printf("\nEnter the last natural number you want the sum of: ");
    scanf("%d", &n);
   // Runs in Linear Time O(n)
   /* for(int i = 1; i <= n; i++){
       sum += i;
    } */ 
    // Runs in Constant Time O(1) 
    sum = (n * n + n) / 2; 
    printf("\nSum of first %d natural numbers: %d", n, sum);
    return 0;
}