/* Pseudo code
first = array[0]
last = array[n-1]

while (first < last)
    first = first XOR last
    last = first XOR last
    first = first XOR last
    first = first + 1
    last = last - 1
endwhile
*/

#include <iostream>
#include <algorithm>

void swap(int& a, int& b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void reverse(int arr[], int n){
    for(int i = 0, j = n - 1; i < j; i++, j--){
        swap(arr[i], arr[j]);
    }
}

int main(){
    int *pa = new int[10] { 28, 11, 20, 14, 2, 9, 19, 85, 24, 11 };

    for(int i = 0; i < 10; i++)
        std::cout << *(pa + i) << "  ";
    std::cout << std::endl;

    // Method 1: using for loop to reverse
    // reverse(pa, 10);

    // Method 2: using the reverse() method defined in the algorithm library
    std::reverse(pa, pa + 10);

    for(int i = 0; i < 10; i++)
        std::cout << *(pa + i) << "  ";
    std::cout << std::endl;

    delete[] pa;
}

