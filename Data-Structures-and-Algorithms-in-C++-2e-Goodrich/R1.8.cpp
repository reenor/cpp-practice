/* Pseudo code

if n mod m = 0 then
    return true
return false

*/

#include <iostream>
using namespace std;

bool isMultiple(const long n, const long m){
    if (n % m == 0){
        return true;
    }
    return false;
}

int main(void){
    long n, m;
    string s = "Yes";

    cout << "Input n and m (> 0): ";
    cin >> n >> m;
    if (!isMultiple(n, m))
        s = "No";
    cout << n << " is multiple of " << m << ": " << s << endl;

    return 0;
}