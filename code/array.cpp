#include <iostream>
using namespace std;

int main() {
    int allarray[5];
    int sum;
    int i, j;

    for (i=0;i<5;i++) {
        allarray[i] = 80;
    }
    
    for (j=0;j<5;j++) {
        sum += allarray[j];
    }

    cout << "sum is " << (double)sum << endl;
    return 0;
}