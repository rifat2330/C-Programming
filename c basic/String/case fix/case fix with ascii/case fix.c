#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    scanf("%s", str1);

    int i, len = strlen(str1);

    for(i = 0; i <  len; i++){
        if(i == 0 && str1[i]>= 97 && str1[i] <= 122){
            str2[i] = str1[i] - 32;
        }else if(i == 0 && str1[i] >= 65 && str1[i] <= 90){
             str2[i] = str1[i];
        }
        else if(str1[i] >= 65 && str1[i] <= 90){
             str2[i] = str1[i] + 32;
        }else{
         str2[i] = str1[i];
        }

    }
    str2[len] = '\0';
    printf("%s %s", str1, str2);


return 0;
}
