
//type def of complex_t, a complex number
typedef struct complex_t
{
    double x; 
    double y;
} complex;


//function declarations 
complex add_complex(complex first, complex secound);  //adds two complex numbers
complex multiply_complex(complex first, complex secound); // multplies two complex numbers
double abs_complex(complex c); // calculates absolute value of a complex number


