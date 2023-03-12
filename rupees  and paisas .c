#include <stdio.h>

int main()  {
    
  float rs ;
  printf("enter the value of rupees");
  
  scanf("%f",&rs) ;
  int a , b ;
  a = rs ;
  b = (rs - a)*100 ;
  printf("the rupee = %d,paisa =%d",a,b) ;
    
    return 0 ;
}
