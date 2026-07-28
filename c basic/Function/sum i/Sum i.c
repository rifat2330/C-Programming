#include<stdio.h>
int displaySum(int x, int y){
    int sum = 0;
    sum = x + y;
    return sum;
}
int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    displaySum(x, y);
    printf("%d", displaySum(x, y));


return 0;
}
