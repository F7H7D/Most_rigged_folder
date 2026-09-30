#include <iostream>


int main(){
    int b[7] = {34, 12, 56, 7, 89, 3, 21};
    int sum = 0;
    float num = sizeof(b)/sizeof(b[0]);
    float av = 0;
    for (int i = 0; i<num; i++){

        sum += b[i];

    }
    av = sum / num;
    std::cout << "the sum of array is " << sum << " the average of array is "<<av<<std::endl;

    return 0;
}