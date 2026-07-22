#include<stdio.h>
int main(){
    float A[5], B[5], AB[5];
    int i;
    for(i = 0; i < 5; i++){
        scanf("%f", &A[i]);

    }
    for(i = 0; i < 5; i++){
        scanf("%f", &B[i]);

    }

    for(i = 0; i < 5; i++){
     AB[i] = A[i] + B[i];
     printf("%.2f ", AB[i]);

    }


return 0;
}
