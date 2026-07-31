#include<stdio.h>
int absValue(int value){
    if(value < 0){
       return value * (-1);
    }else{
       return value;
    }
}
int main(){
    int value;
    scanf("%d", &value);

    printf("%d asolute value is: %d", value, absValue(value));

return 0;
}
