#include<stdio.h>
int main(){
    char str[50];
    scanf("%s", str);
    int i = 0;
    while(1){
        if(str[i] == '\0')
            break;
        else

        printf("%c\n", str[i]);

        i++;
    }


return 0;
}
