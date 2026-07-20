#include<stdio.h>
int main(){
    int arr[7] = {-99,45,100,37,89,-327,245};
    int i, max;
    for(i = 0; i < 7; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("%d", max);

return 0;
}
