
#include <stdio.h> //printf 

//defien the mandelbrot_print function 
void mandelbrot_print(int result[60][80]){
    
    //define int y and x to keep track of the position
    int y, x;

    //first loop goes from 0 to 60 for the y direction
    for( y = 0; y <= 60; y = y + 1){

        //secound loop goes from 80 to zero for the x direction
        for( x = 80; x >=1 ; x = x - 1){
            //check if the current postion is a one or a zero,
            //all zeros get printed as a empty space while ones
            //will get printed as # to create the image
            if( result[y][x] == 1){
                printf("#");
            }
            else{
                printf(" ");
            }
        }
        //create new line each iteration of the first loop
        printf("\n");

    }
}
