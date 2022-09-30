//CS 222, project 2
//Bradley Frye 
// 
//
//Complex numbers operations 


#include <math.h> // sqrt 
#include "complex.h" // typedef complex_t, function prototypes

complex add_complex(complex first, complex secound){

    //define the double a,b and complex result
    double a, b;
    complex result;

    //set a to tbe equal to the x value of the first and secound input complex
    a = first.x + secound.x;
    //set b to be equal to the y values of the first and secoung input complex
    b = secound.y + first.y;

    //set the result x and y to a and b respecfuly 
    result.x = a;
    result.y = b;

    //return the result
    return result;

}


//define the multiply_complex function 
complex multiply_complex(complex first, complex secound){

    //define complex result and the doubles a,b,c, and d
    complex result;
    double a, b, c,d;

    //use foil to multiply the two complex numbesr together and set the resulting terms accordingly
    a = first.x * secound.x;
    b = first.x * secound.y;
    c = first.y * secound.x;
    d = first.y * secound.y;

    //set result.x to a -d and result.y to b + c
    result.x = a - d;
    result.y = b + c;

    //return the result complex 
    return result;


}


//define the abs_complex function 
double abs_complex(complex c){

    //define the double result
    double result;
    //set result equal to the outple of both terms squared and added to gether 
    //then square rooted 
    result = sqrt((c.x * c.x) + (c.y *c.y));

    //return the result 
    return result;
}

