#include <math.h>

double func(const double x) {
    double y;
   
    if ( x > 0 ) {
        y = tan(x)*tan(x);
    }
    if ( x < 0 ) {
        y = x*x*sin(x);
    }
    if (x == 0.) {
        y = 0.0;
    }
    
    return y;
}
