#include<stdio.h>
#include "myMath.h"

float add(float x , float y) {
    
    float ans = x+y;
    return ans;
}
float sub (float x , float y ) {

    float ans = x-y;
    return ans;
}

double mul (double x , int y ){
    double ans = x*y;
    return ans;
}
double div (double x , int y ){
    
    if ( y == 0 ) {
        printf("We can't divide any number by zero!\n");
		return -1;
    }
    else {
    double ans = x/y;
    return ans;
    }
    
}
