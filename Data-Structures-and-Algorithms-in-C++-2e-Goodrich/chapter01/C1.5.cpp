/*
The Knuth Shuffle is an algorithm for randomly shuffling the elements of an array

Pseudo-code
for i from last downto 1
    j = random interger in range 0 <= j <= i
    swap A[i] with A[j]
endfor
*/

#include <iostream>
#include <cstdlib>

void shuffle(int a[], size_t n){
    std::srand(time(0));
    for(size_t i = n - 1; i >= 1; --i){
        int j = std::rand() % (i + 1);
        if (j != i){
           a[i] = a[i] ^ a[j];
           a[j] = a[i] ^ a[j];
           a[i] = a[i] ^ a[j];
        }
    }
}

int main(){
    int a[52];
    for(size_t i = 0; i < 52; ++i)
        a[i] = i + 1;
    shuffle(a, 52);
    std::cout << "Shuffled array is:" << std::endl;
    for(size_t i = 0; i < 52; ++i)
        std::cout << a[i] << "  ";
    std::cout << std::endl;
}