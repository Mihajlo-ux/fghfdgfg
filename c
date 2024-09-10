#include<stdio.h>
#include<math.h>
//Program koji izracunva rastojanje tacake i koordinatnog pocetka
int main(){
    printf("unesi koordinate tacke A");
    
    float x,y;

    scanf("%f %f",&x, &y);
    printf("rastojanje na kvradrat %f\n", x*x+y*y);
     printf("rastojanje na kvradrat %f\n", sqrt(x*x+y*y));
     return 0;


    
    
    
    
    
    
    }
