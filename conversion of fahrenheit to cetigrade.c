#include <stdio.h>

int main()  {
    
    float f , c ;
    printf("enter the farenheit number ");
    scanf("%f",&c) ;
    f = (c*1.8) + 32 ;
    printf("the centegrade value for the given fahrenheit   is = %2.f" , f) ;
    
    return 0 ;
}
