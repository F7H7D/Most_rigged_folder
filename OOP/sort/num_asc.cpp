#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main (){
    int numbers[] = {31, 12, 7, 45, 3, 18, 26};

    int size = sizeof(numbers)/ sizeof(numbers[0]);

    sort(numbers,numbers + size);
    for(int x : numbers){
        cout << x << " ";
    }
    cout << endl;



    return 0;
}