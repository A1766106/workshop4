#include <iostream>
#include <stdlib.h>

using namespace std;

int size_of_variable_star_t()
{
    int a, *p;
    p = &a;
    int *t = new int;
    return sizeof(t);
}

// int *t = new int;

int main()
{
    cout << size_of_variable_star_t();
    return 0;
}