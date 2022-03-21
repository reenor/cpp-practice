/* Pseudo code

sum = 0

for count from 1 to n - 1
    sum = sum + count
endfor

return sum

*/

#include <iostream>
using namespace std;

int sum(const int n){
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum += i;
    }

    return sum;
}

int main(void){
    int n = 0;
    int s = 0;

    cout << "Input any integer: ";
    cin >> n;
    s = sum(n);

    cout << "Sum of all integers smaller than " << n << " is " << s << endl;

    return 1;
}