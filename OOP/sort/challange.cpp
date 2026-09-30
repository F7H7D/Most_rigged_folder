#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main (){
    vector<int> numbers = {5, 12, 5, 8, 2, 12, 19, 3, 8};

    sort(numbers.rbegin(),numbers.rend());

    for (int x : numbers){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}