#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;


int main (){
    int numbers[] = {16, 4, 29, 8, 35, 12, 2};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    sort(numbers, numbers +size, greater<int>());
    for (int i : numbers){
        cout << i << " ";
    }

    cout << endl;
    return 0;
}