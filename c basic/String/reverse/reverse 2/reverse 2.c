#include<stdio.h>
int main(){

char str[100], temp;
gets(str);
int i, len = 0;

while(str[len] != '\0'){
        len++;

}
        for(i = 0; i < len/2; i++){
    temp = str[i];
    str[i] = str[len-1-i];
    str[len-1-i] = temp;
}

printf("Reverse string: %s", str);
return 0;
}





