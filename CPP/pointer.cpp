#include <iostream>


int main(){
    int x,y;
    x = 10;
    y = 20;
    int* b = &x;
    *b = 100;

    std::cout << x << " " << y << std::endl;
    
    return 0;
}