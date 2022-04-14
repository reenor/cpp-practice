#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>

int main(){
    std::vector<std::string> v;
    std::string str = "I will always use object oriented design.";
    std::string str_1 = " will always use object oriented design.";
    std::string str_2 = "Iwill always use object oriented design.";
    std::string str_3 = "I will alway use object oriented design.";
    std::string str_4 = "I will always useobject oriented design.";
    std::string str_5 = "I will always use objec oriented design.";
    std::string str_6 = "I will always use object orient design.";
    std::string str_7 = "I will always use object oriented desig.";
    std::string str_8 = "I will always use object oriented design";

    for(int i = 0; i < 92; i++)
        v.push_back(str);
    v.push_back(str_1);
    v.push_back(str_2);
    v.push_back(str_3);
    v.push_back(str_4);
    v.push_back(str_5);
    v.push_back(str_6);
    v.push_back(str_7);
    v.push_back(str_8);

    auto rd = std::random_device {};
    auto rng = std::default_random_engine{ rd() };
    std::shuffle(std::begin(v), std::end(v), rng);

    for(int i = 0; i < 100; i++)
        std::cout << i + 1 << ". " << v.at(i) << std::endl;

}