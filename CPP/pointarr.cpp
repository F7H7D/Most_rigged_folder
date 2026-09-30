#include <iostream>


int main(){

    int arr[5] = {10, 20, 30, 40, 50};

    int num = sizeof(arr)/sizeof(arr[0]);

    int* p = arr;

    for (int i = 0; i < num; i++ ){

        std::cout << *(p + i) << std::endl;

    }



    return 0;
}