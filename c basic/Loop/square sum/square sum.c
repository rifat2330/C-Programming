#include<stdio.h>
#include<math.h>
int main(){
    int i, result, sum = 0;
    for(i = 5; i <= 25; i++){
    result = pow(i, 2);
    sum = sum + result;

    }
    printf("%d\n", sum);



return 0;
}
