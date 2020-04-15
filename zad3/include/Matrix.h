#include <iostream>
#include <set>

class Matrix
{
public:
    Matrix ( int );
    ~Matrix ();
    void fill_matrix( int *, int *, int * );
    void print_matrix();
    void fill_triangle();
    void find_max();
private:
    int _order; // matrix order
    int ** _ptrMatrix; // matrix elements
    std::set <int> _elements; // elemets of hatched region
};
