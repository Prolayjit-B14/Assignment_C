// Print  Matrix - Output to Code

#include <stdio.h>

void main(){
    int i , j ;
    int a = 1 ;
    
    for ( i = 0 ; i < 3 ; i++)
    {
        for ( j = 0 ; j < 3 ; j++)
        {
            printf( "%d " , a );
            a++;
        }

        printf("\n");
    }

return 0;
}