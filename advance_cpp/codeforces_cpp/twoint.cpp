#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int diff = abs(a - b);

        int count = (diff + 9) / 10;

        cout << count << '\n';
    }

    return 0;
}