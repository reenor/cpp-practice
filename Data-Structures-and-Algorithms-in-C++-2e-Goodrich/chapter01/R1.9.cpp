/* Pseudo code of printArray(A, m, n)
for row from 0 to m - 1
    for col from 0 to n - 1
        Output *(*(A + row) + col)
    endfor
    Output Newline
endfor
*/
#include <iostream>
using namespace std;

void printArray(const int **A, const int m, const int n){
    //https://overiq.com/c-programming-101/pointers-and-2-d-arrays/
    for(int row = 0; row < m; row++){
        for(int col = 0; col < n; col++)
            cout << *(*(A + row) + col) << ", ";
        cout << endl;
    }
}

int main()
{
    int **arr = NULL;
    int rows = 3;
    int cols = 4;
    
    //https://www.geeksforgeeks.org/creating-array-of-pointers-in-cpp/
    arr = new int*[rows];
    for(int i = 0; i < rows; i++)
        arr[i] = new int[cols];
    
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            arr[i][j] = 10 * i + j;

    printArray((const int **)arr, rows, cols);

    for(int i = 0; i < rows; i++)
        delete[] arr[i];
    delete[] arr;
    
    return 0;
}