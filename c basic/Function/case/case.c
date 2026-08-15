#include<stdio.h>
int toUpperCase(char alphabet){
    int capital_version = alphabet - 32;
    return capital_version;
}

int main(){
    int alphabet;
    printf("enter a small later alphabet: ");
    scanf("%c", &alphabet);
   printf("capital version: %c", toUpperCase(alphabet));



return 0;
}

