#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    scanf("%s", str1);
    int i, length = strlen(str1);

    if(strcmp(str1, "xyz")  == 0){
       for(i = 0; i < length; i++){
       str2[i] = str1[i] - 23;
       }
    }else{
       for(i = 0; i < length; i++){
        str2[i] = str1[i] + 3;
       }

    }
    str2[length] = '\0';
    printf("%s", str2);



return 0;
}
