#include<stdio.h>
int main(){
    int a[5];
    int i, sum = 0, count = 0;

    for(i = 0;i < 5; i++){
        scanf("%d", & a[i]);
    }
     for(i = 0;i < 5; i++){
            if(a[i] > 100){
               sum = sum + a[i];
               count ++;
            }
    }
   if (count == 0){
    printf("No number greater than 100");
   }else{
   float avg = (float)sum / count;
   printf("%.2f", avg);
   }



return 0;
}

