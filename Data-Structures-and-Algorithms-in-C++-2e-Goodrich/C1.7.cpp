#include <iostream>
#include <string>
#include <vector>

void reverseLinesInput(){
    std::vector<std::string> v;
    std::cout << "Input your lines (press \"quit\" to quit): " << std::endl;
    bool quit = false;

    // Read all lines of input from standard input
    while(quit == false){
        std::string str;
        std::getline(std::cin, str);
        if(str.compare("quit"))
            v.push_back(str);
        else
            quit = true;
    }

    if(!v.empty()){
        // Write them to standard output in reverse order
        std::cout << "Your input in reverse order:" << std::endl;
        while(!v.empty()){
            std::cout << v.back() << std::endl;
            v.pop_back();
        }
    }
}

int main(){
    reverseLinesInput();
}