typedef int (*operation_func)(int, int);
int add(int x, int y) {
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}
int divide(int x, int y) {
    return x / y;
}
operation_func op_add = add;
operation_func op_sub = sub;
operation_func op_div = divide;

