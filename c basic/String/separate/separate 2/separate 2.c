#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s", str);
    int length = strlen(str), i;
    for(i = 0; i < length; i++){
            printf("%c\n", str[i]);

    }


return 0;
}
