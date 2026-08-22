#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    gets(str);

    int i, len = strlen(str), word_count = 0, in_word = 0;

    for(i = 0; i < len; i++){
        if(str[i] != ' ' && str[i] != '\n' && in_word == 0){
            word_count ++;
            in_word = 1;
        }else if(str[i] == ' ' || str[i] == '\n'){
             in_word = 0;
        }
    }
    printf("%d",word_count);


return 0;
}
