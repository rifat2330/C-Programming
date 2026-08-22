#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);

    int i, len = strlen(str);

    if(str[0] >= 'a' && str[0] <= 'z'){
        printf("%c", str[0] - 32);
    }else{
     printf("%c", str[0]);

    }
    for(i = 1; i <= len; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            printf("%c", str[i] + 32);
        }
        else{
        printf("%c", str[i]);
        }
    }



return 0;
}





