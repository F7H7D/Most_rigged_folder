#include <iostream>
using namespace std;



int main(){
    int a, count;

    count = 0;
    cin >> a;

    count = a / 5;

    if (a % 5 != 0) {
        count++;
}

    cout << count << endl;
}