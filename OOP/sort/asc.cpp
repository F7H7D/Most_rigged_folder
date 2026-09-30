#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main (){
    vector<int> numbers = {18, 5, 27, 3, 14, 9, 21};

    sort(numbers.begin(),numbers.end());

    for (int x : numbers){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}