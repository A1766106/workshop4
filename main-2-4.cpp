#include <iostream>
#include <string>

using namespace std;

extern float arithmetic_ops(float left, float right, float (*op)(float, float));
extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float divide_op(float left, float right);
extern float multiply_op(float left, float right);

int main()
{
    cout << arithmetic_ops(20,10, multiply_op) << endl;
    return 0;
}