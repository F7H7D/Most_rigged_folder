#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main (){
    vector<int> numbers = {15, 8, 32, 4, 21, 11};
    sort(numbers.begin(),numbers.end());
    for (int x : numbers){
        cout << x << " ";
    }
    cout << endl;
    sort(numbers.rbegin(),numbers.rend());
    for (int x : numbers){
        cout << x << " ";
    }
    cout << endl;




    return 0;
}