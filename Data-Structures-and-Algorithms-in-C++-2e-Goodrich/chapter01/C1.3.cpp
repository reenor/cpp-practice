#include <iostream>
#include <vector>

bool checkDistinct(const std::vector<int> &v){
    for(size_t i = 0; i < v.size() - 1; i++)
        for(size_t j = i + 1; j < v.size(); j++)
            if(v.at(i) == v.at(j))
                return false;
    return true;
}

int main(){
    std::vector<int> v = {1, 2, 3, 4, 5, 5};

    if(true == checkDistinct(v)){
        std::cout << "All the numbers are distinct" << std::endl;
    } else{
        std::cout << "There are duplicate ones" << std::endl;
    }
}