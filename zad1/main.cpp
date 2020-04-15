// Вычислить и вывести на экран таблицу функции y=f(x) 
// в интервале [a,b] с шагом h. Результаты представить 
// в виде таблицы. Таблицу выровнять с помощью функций 
// форматирования cout.width(), cout.precision(). 

#include <iostream> 

double func ( const double x );

int main() {
    double x = -1.0;
    double step = 0.2;
      
    while ( x <= 1) {
        
        // Sets a width of an output place
        std::cout.width(12);
        
        // Sets number of significant digits after commo
        std::cout.precision(5);
        
        // std::fixed sets the form of number's output in fixed form
        // ( basic decimal, non-scientific)
        std::cout << std::fixed << x << "   " << func(x) << std::endl;
        x = x + step;
    }
    
    return 0;
}
