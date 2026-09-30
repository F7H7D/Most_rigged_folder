#include <iostream>


int main(){

    int b[7] = {34, 12, 56, 7, 89, 3, 21};
    int smallest = b[0];
    for (int i = 0; i < 7; i++) {

        if (b[i] < smallest){
            smallest = b[i];
        }
    }
    std::cout << "the smallest one is " << smallest << std::endl;

    return 0;
}