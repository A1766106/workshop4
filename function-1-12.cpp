#include <iostream>
#include <stdlib.h>

using namespace std;

int size_of_variable_arr()
{
    int a, *p;
    p = &a;
    int *t = new int;
    int *arr = new int[3];
    delete arr;
    return sizeof(arr);

}

int main()
{
    cout << size_of_variable_arr() << endl;
    return 0;
}