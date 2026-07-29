#include<stdio.h>
float dollarToBDT(float dollar){
    float taka = dollar * 78.55;
    return taka;



}



int main(){
    float dollar;
    scanf("%f", &dollar);
    printf("%.2f", dollarToBDT(dollar));



return 0;
}
