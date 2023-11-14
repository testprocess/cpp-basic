#include <iostream>
using namespace std;

int main() {
    int a = 80;
    int b = 24;
    cout << "+ is " << a + b << endl;
    cout << "- is " << a - b << endl;
    cout << "* is " << a * b << endl;
    cout << "/ is " << a / b << endl;

    a += 90;

    cout << "a + 90 is " << a  << endl;

    a++;

    cout << a << endl;

    return 0;
}