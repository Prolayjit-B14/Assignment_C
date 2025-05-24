// Area & Perimeter of Circle

#include <stdio.h>

int main (){
    float r , A , P ;

    printf("Enter Radius : ");
    scanf("%f", &r);

    A = 3.14*r*r ;
    P = 2*3.14*r ;

    printf("Area = %f , Perimeter = %f", A,P);

    return 0;
}