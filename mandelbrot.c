

#include "complex.h"// typedef for complex, multiplycomplex 
#include "mandelbrot.h"// function protype for mandelbrot

complex mandelbrot(complex c, int n){

    //define the end statemetn as when n==0 and to return c
    if(n == 0){
        return c ;
    }
    //define the reucursive loop
    else{
        //have the program recurisively apply the formula c*c +c n times 
        return add_complex(multiply_complex(mandelbrot(c,n-1), mandelbrot(c,n-1)), c);
    }
}


