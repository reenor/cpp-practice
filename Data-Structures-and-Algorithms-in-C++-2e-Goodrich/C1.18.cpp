#include <iostream>
#include <vector>

std::vector<double> product(std::vector<double> a, std::vector<double> b){
    std::vector<double> c;
    for(size_t i = 0, j = 0; i < a.size() && j < b.size(); ++i, ++j){
        c.push_back(a.at(i) * b.at(j));
    }
    return c;
}

int main(){
    std::vector<double> c;
    std::vector<double> a = {1.0, 2.0, 3.0};
    std::vector<double> b = {1.0, 2.0, 3.0};
    c = product(a, b);
    std::cout << "Vector c:" << std::endl;
    for(auto itr : c)
        std::cout << itr << std::endl;
}