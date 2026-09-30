#include <iostream>
using namespace std;



int main (){
    int numbers[8] = {12, 7, 25, 3, 18, 7, 31, 5};
    int a;
    cout << "Input: " ;
    cin >> a;
    int size = sizeof(numbers)/sizeof(numbers[0]);

    for (int i = 0; i < size; i++){

            if (numbers[i] == a){
                cout << "Output: Index: " << i << endl;
            }
        }
        return 0;
    }




