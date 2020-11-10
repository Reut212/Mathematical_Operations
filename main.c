#include "myMath.h"
#include<stdio.h>

#define e 2.718281828

//First function: f(x) = e^x+x^3-2
void function1 (double x){

double ans = sub(add(Pow(e,x), Pow(x,3)),2);
printf("The value of f(x) = e^x+x^3-2 at the point %f is: %0.4f \n", x, ans);
}

//Second function: f(x) = 3x+2x^2
void function2 (double x ){
double ans,ans1,ans2, finalAns;
ans = mul(x,3);
ans1 = Pow(x,2);
ans2 = mul(ans1,2);
finalAns = add(ans, ans2);
printf("The value of f(x) = 3x+2*x^2 at the point %f is: %0.4f \n",x,finalAns);
}

//Third function: f(x) = (4x^3)/5-2x
void function3 (double x){
    double ans, ans1, ans2, ans3, finalAns;
    ans = Pow(x,3);
    ans1 = mul(ans,4);
    ans2 = div(ans1,5);
    ans3 = mul(x,2);
    finalAns = sub(ans2, ans3);
    printf("The value of f(x) = (4x^3)/5-2x at the point %f is: %0.4f \n",x,finalAns);
    
}


int main () {

double x;
printf("Please insert a real number : ");
scanf("%lf", &x);
function1(x);
function2(x);
function3(x);
}