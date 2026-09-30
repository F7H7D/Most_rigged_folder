#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;


int main (){
    vector<int> numbers = {15, 4, 23, 8, 19};
    int number[7] = {12,34,63,245,36,4,52};
    int size = sizeof(number)/sizeof(number[0]);
    sort(numbers.begin(),numbers.end(),greater<int>());
    sort(number, number + size , greater<int>());
    for (int x : numbers){
        cout << x << " ";
    }
    cout << endl;
    for (int x : number){
        cout << x << " ";
    }
    cout << endl;


    return 0;
}



