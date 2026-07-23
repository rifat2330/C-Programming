#include<stdio.h>
int main(){
    int arr[3][3], i , j, sum = 0, avg, count = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
            count++;
        }
    }
    avg = sum / count;
    printf("%d", avg);




return 0;
}
