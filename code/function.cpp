#include <iostream>
using namespace std;

int CustomFun(int);

int main() {
    int result;
    result = CustomFun(80);
    cout << "function return is " << result << endl;
    return 0;
}

int CustomFun(int test) {
    return test;
}