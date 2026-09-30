#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main (){
    vector<int> numbers = {15, 4, 23, 8, 19, 2, 11};
    int number[6] = {3,4,5,6,2,3};
    int size = sizeof(number)/sizeof(number[0]);
    sort(number, number + size);
    sort(numbers.begin(), numbers.end());

    for (int x : number){
        cout << x << " ";
    }
    cout << endl;
    for (int x : numbers){

        cout << x << " ";
    }


    return 0;
}