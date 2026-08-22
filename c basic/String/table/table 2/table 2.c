#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s", str);
    int i, len = strlen(str);

    for(i = 0; i < len; i++){
        if(str[i] >= 120 && str[i] <= 122){
            printf("%c", str[i] - 23);
        }else{
            printf("%c", str[i] + 3);
        }
    }

return 0;
}
