#include <iostream>
#include <stdlib.h>

using namespace std;

int size_of_variable_arr()
{
    int a, *p;
    p = &a;
    int *t = new int;
    int *arr = new int[3];
    // int sumSize = 0;
    return 3*sizeof(arr);
    // for(int i=0;i<3;i++)
    // {
    //     sumSize = sumSize + sizeof(arr[i]);
    // }
    // return sumSize;

}
