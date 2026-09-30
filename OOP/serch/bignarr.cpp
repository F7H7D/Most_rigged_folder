#include <iostream>
using namespace std;


int main (){
    int numbers[8] = {12, 7, 25, 3, 18, 9, 31, 5};

    int largest = numbers[0];
    for (int i : numbers){
        if (i > largest){
            largest = i;
        }
    }
    cout << largest << endl;


    return 0;
}