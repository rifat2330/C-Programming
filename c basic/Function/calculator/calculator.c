#include<stdio.h>
float add(int a, int b){
    return a + b;
}
float sub(int a, int b){
   return a - b;
}
float mult(int a, int b){
   return a * b;
}
float div(int a, int b){
   return a / b;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);

    printf("add: %.2f\n", add(a, b));
    printf("sub: %.2f\n", sub(a, b));
    printf("mult: %.2f\n", mult(a, b));
    if(b != 0){
    printf("div: %.2f", div(a, b));
    }else{
    printf("Invalid\n");
    }


return 0;
}


