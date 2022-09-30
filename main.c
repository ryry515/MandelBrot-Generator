//CS 222, project 2
//Bradley Frye 
// 
//
//main function file for mandelbrot 

//standard headers
#include<stdio.h>
#include<math.h>

//userdefined headers
#include "complex.h"
#include "mandelbrot_print.h"
#include "mandelbrot.h"

//define main function 
int
main(void){
    //create the 2d array to be 60 by 80 
    int mend[60][80];

    //define all cordinates constants 
    double xmin = -2.0;
    double ymin = -1.12;
    double xmax = 0.47;
    double ymax = 1.12;

    //create blank cordinate counters for x and y   
    int xcount, ycount;

    //start the xcounter at 80 and y counter at 0
    xcount = 80;
    ycount = 0;

    //create a loop that will step through the x cordinates with a step of 0.030875
    for( double curx = xmin; curx <= xmax; curx = curx + 0.030875){

        //create a loop that will step throught the y cordinates with a step of 0.0385
        for( double cury = ymin; cury <= ymax; cury = cury + 0.0385){
            
            //define the complex number c 
            //set the x and y to the appropiately
            complex c;
            c.x = curx; 
            c.y = cury;

            //define complex result and set it to the mandelbrot of the c and 15
            complex result;
            result = mandelbrot(c, 15);

            //set abs to the absolute value of result
            double abs = abs_complex(result);

            //if the abs is less then 100000 set the current position in the array to 1 
            //if not then set the psotion to 0
            if(abs < 10000.0){
                mend[ycount][xcount] = 1;
            }
            else{
                mend[ycount][xcount] = 0;
            }
            // add one the the y count each y interation
            ycount = ycount + 1;

        }

        //reset the ycount and subtract one from the x count 
        ycount = 0;
        xcount = xcount - 1;
    }   

    //call mandelbrot _print to print the array picture 
    mandelbrot_print(mend);
    return(0);

}






