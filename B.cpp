#include <iostream>
using namespace std;
void fib(int num) {
    int x = 0, y = 1, z = 0;
    for (int i = 0; i < num; i++) {
        cout << x << " ";
        z = x + y;
        x = y;
        y = z;
    }
}
int main() {
    int num;
    cin >> num;
    fib(num);
    return 0;
}
