#include<stdio.h>

float flagArea(float l){
      float w = (6 * l) / 10;
      float area = l * w;

      return area;
}
int main(){
    float l;
    scanf("%f", &l);

    printf("Area of Bangladesh flag is: %.2f", flagArea(l));


return 0;
}
