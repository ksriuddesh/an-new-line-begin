#include <stdio.h>
enum months {january  , february , march , april , may , june = 53 , july,august,september ,october , november , descember } ;

 int main()  {
    
    enum months m= may ;
    enum months f = february ;
    enum months  s = september ;  
    enum months d = descember ;
    printf("the value of may in the months is     %d ",s);
    printf("\n the vale of february in months is  %d ",f) ;
    printf("\nthe value of descember in months is %d ", d);
    
    return 0 ;
}
