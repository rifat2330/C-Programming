#include<stdio.h>
int findMax(int a, int b, int c){
    int max;
    if(a > b && a > c){
        max = a;
    }else if(b > c){
        max = b;
    }else{
        max = c;
    }
    return max;

}
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("max: %d", findMax(a, b, c));

return 0;
}
