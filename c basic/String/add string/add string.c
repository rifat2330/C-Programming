#include<stdio.h>
#include<string.h>
int main(){
    char str1[3] = "We";
    char str2[10] = " Love";
    char str3[15] = " Bangladesh";
    char str4[50];

    int i, j = 0;

    for(i = 0; i  < strlen(str1); i++){
        str4[j++] = str1[i];
    }
    for(i = 0; i  < strlen(str2); i++){
        str4[j++] = str2[i];
    }
    for(i = 0; i  < strlen(str3); i++){
        str4[j++] = str3[i];
    }
    str4[j] = '\0';
    printf("%s", str4);




return 0;
}
