#include<stdio.h>
int main(){
    int N, i;
    scanf("%d", &N);
    if(N == -1){
        return 0;
    }else if(N > -32){
        i = N;
    while(i >= -32){


        printf("%d ", i);
        i--;
    }
    }else{
    i = N;
    while(i <= -32){

        printf("%d ", i);
        i++;
    }
    }





return 0;
}
