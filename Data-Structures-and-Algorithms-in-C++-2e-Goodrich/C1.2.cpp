/* Pseudo code
for i from 0 to n - 1
    for j from i + 1 to n
        if (i * j) MOD 2 = 0 then
            Output (i, j)
        endif
    endfor
endfor
*/

#include <iostream>

bool productEven(const int a[], int n){
    bool yes = false;
    for(int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if ((a[i] * a[j]) % 2 == 0){
                std::cout << "(" << a[i] << "," << a[j] << ")" << std::endl;
                yes = true;
            }
        
    return yes;
}

int main(){
    int *pa = new int[10]{28, 11, 20, 14, 2, 9, 19, 85, 24, 11};
    if(productEven(pa, 10) == false)
        std::cout << "There are no pairs!" << std::endl;
    
    delete[] pa;
}
