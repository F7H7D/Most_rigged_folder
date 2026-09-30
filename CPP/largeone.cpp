#include <iostream>



int main(){
    int x[5] = {12, 7, 25, 3, 18};
    int largest = x[0];
    for (int i = 0 ; i < 5; i++)
    {
        if (x[i] > largest){
            largest = x[i];
        }
    }
    std::cout<<"the largest is "<<largest<<std::endl;
}