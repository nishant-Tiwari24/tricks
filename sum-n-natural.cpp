#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int x = (sqrt(1 + 8 * (long long)n) - 1) / 2;
        cout << floor(x) << endl;
    }
    return 0;
}
