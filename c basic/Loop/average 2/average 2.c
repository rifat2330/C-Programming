#include<stdio.h>
int main(){
    int i, sum = 0, count = 0;
    float average;

    for(i = 10; i <= 500; i++){
        if(i % 3 == 0 && i % 5 == 0 && i % 12 == 0){
            sum = sum + i;
            count ++;
        }
    }

    average = sum / count;

    printf("%.2f\n", average);

return 0;
}
