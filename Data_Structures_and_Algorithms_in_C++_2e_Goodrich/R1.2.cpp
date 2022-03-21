// How to write pseudocode:
// https://computersciencewiki.org/index.php/Pseudocode

/* Pseudo code
smallestNumber = array[0]
largestNumber = array[0]

for count from 1 to n
    if smallestNumber > array[count] then
        smallestNumber = array[count]
    endif

    if largestNumber < array[count] then
        largestNumber = array[count]
    endif
endfor
*/

#include <iostream>

using namespace std;

void findSmallestLargest(const int *arr, const int n, int *smallest, int *largest)
{
    *largest = *smallest = *arr;
    
    for (int i = 1; i < n; i++)
    {
        if (*smallest > *(arr + i))
            *smallest = *(arr + i);
        if (*largest < *(arr + i))
            *largest = *(arr + i);
    }
}

int main(void)
{
    const int arr[] = {2, 7, 8, 10, 50, 10, 12, 23, 28, 45, 78, 1};
    int smallest = 0, largest = 0;

    const int n = sizeof(arr) / sizeof(int);

    findSmallestLargest(arr, n, &smallest, &largest);
    cout << "Smallest one: " << smallest << endl;
    cout << "Largest one: " << largest << endl;
}