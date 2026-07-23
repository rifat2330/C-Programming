#include<stdio.h>
int main(){
    int arr[5], i, even_sum = 0, odd_sum = 0;
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0){
            even_sum = even_sum + arr[i];
        }else{
        odd_sum = odd_sum + arr[i];

        }

    }
    printf("values of array: ");
    for(i = 0; i < 5; i++){
        printf("%d ",arr[i]);
    }

    printf("\nodd sum = %d ", odd_sum);


    printf("\neven sum = %d ", even_sum);





return 0;
}
