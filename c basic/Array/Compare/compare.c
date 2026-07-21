#include<stdio.h>
int main(){
    float A[5], sum_a = 0, avg_a;
    float B[5], sum_b = 0, avg_b;
    int i;
    for( i = 0; i < 5; i++){
        scanf("%f", &A[i]);
        sum_a = sum_a + A[i];
    }


    for( i = 0; i < 5; i++){
        scanf("%f", &B[i]);
        sum_b = sum_b + B[i];
    }
    avg_a = sum_a / 5;
    avg_b = sum_b / 5;
    if(avg_a > avg_b){
        printf("Avg: %.2f -> A", avg_a);
    }else{
        printf("Avg: %.2f -> B", avg_b);
    }



return 0;
}
