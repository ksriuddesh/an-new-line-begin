
#include <stdio.h>

int main()
{
    int n, a , b , c ;
    printf ("enter the respected number to get sum of individual number  ") ; //a = first digit number , b = second digit number , c= third digit number
    scanf ("%d," , &n) ;
    a = n/100 ;
    b = (n%100)%10 ;
    c = (n%100)/10 ;
    printf ("the sum of individuals of the given numbers is = %d",a+b+c ) ;
    

    return 0;
}
