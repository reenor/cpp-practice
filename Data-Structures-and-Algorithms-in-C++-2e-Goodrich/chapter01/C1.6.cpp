/*
Permutations of string abc are abc, acb, bac, bca, cab, cba
A string with length of n has n! permutations
n! = n x (n - 1) x (n - 2) x ... x 1

Pseudo code using backtracking
permute(str, left, right)
    if left = right then
        output str
    else
        for i from left to right
            swap str[i] and str[left]
            permute(str, left + 1, right)
            swap str[i] and str[left] //reverse the string (backtracking)
        endfor
    endif
*/

#include <iostream>
#include <string>

void swap(char &a, char &b){
    if (a != b){
        a = a + b;
        b = a - b;
        a = a - b;
    }
}

void permute(std::string &str, size_t left, size_t right){
    if(left == right){
        std::cout << str << std::endl;
    }
    else{
        for(size_t i = left; i <= right; ++i){
            swap(str[i], str[left]);
            permute(str, left + 1, right);
            swap(str[i], str[left]);
        }
    }
}

int main(){
    std::string str = "abc";
    std::cout << "All the permutations are:" << std::endl;
    permute(str, 0, str.size() - 1);
}