#include<stdio.h>
void EvenOdd(int n){
     if(n % 2 == 0){
        printf("EVEN\n");
     }else{
     printf("ODD\n");
     }
}
int main(){
    int n;
    scanf("%d", &n);
    EvenOdd(n);




return 0;
}
