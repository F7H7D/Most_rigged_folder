#include <iostream>
using namespace std;



int main (){
    int numbers[13] = {5, 2, 5, 8, 5, 1, 9, 5, 3, 5,3,3};
    int a,count;
    cout << "Input: ";
    cin>> a;
    count = 0;

    for (int number: numbers){
        if (number == a){
            count ++;
        }
    }
    cout << "Output: " << count << endl; 

    return 0;
}

