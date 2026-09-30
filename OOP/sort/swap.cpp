#include <iostream>
using namespace std;






int main() {
    int numbers[] = {15, 4, 23, 8, 19};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // এখানে তোর code লিখবি
    int    min = 0;
    for (int j = 1;j < size;j++){
        if(numbers[j]<numbers[min]){
            min = j;
        }
    }
    swap(numbers[0],numbers[min]);

    for (int x : numbers) {
        cout << x << " ";
    }

    return 0;
}


    