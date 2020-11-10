#include<stdio.h>
#include "myMath.h"

#define e 2.718281828

double Pow ( double x , int y ){

    double ans = 1;

    if ( y == 0 ) {
        return ans;
    }
    else if ( y > 0 ) {
        for ( int i = 1 ; i <=y ; i++) {
            ans*=x;
        }
        
    }
    else { // y < 0
         y=-y;
         for ( int i = 1 ; i<=y ; i++){
             ans*=x;
         }
          return (double)(1)/ans;	
    }
    
    return ans;
    
}


double Exp ( int x ) {

double ans = Pow(e,(int)x);

return ans;

}

