#include <iostream>
#include <vector>
#include <string>

void showCalendar(int startingDay, int year){
    std::vector<std::string> month = {"January", "February", "March", "April", "May", "June",
                                "July", "August", "September", "October", "November", "December"};
    std::vector<std::string> day = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    std::vector<int> daysOfMonth = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (!(year % 4) && !(year % 100) && !(year % 400)) //Check if this year is a leap year;
        daysOfMonth.at(1) = 29;

    for(int m = 0; m < 12; m++){
        //Show the header
        std::cout << "\t\t\t" << month.at(m) << std::endl;
        for(int dow = 0; dow < 7; dow++)
            std::cout << day.at(dow) << "\t";
        std::cout << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;

        //Show the body
        for(int d = 0; d < startingDay; d++)
            std::cout << "\t";
        for(int d = 0; d < daysOfMonth.at(m); d++){
            std::cout << d + 1 << "\t";
            startingDay++;
            if(startingDay == 7){
                startingDay = 0;
                std::cout << std::endl;
            }
        }
        std::cout << std::endl << std::endl;
    }                            
}

int main(){
    int dayOfWeek, year;
    std::cout << "Input the starting day (0:Sun, 1:Mon, 2:Tue, 3:Wed, 4:Thu, 5:Fri, 6:Sat): ";
    std::cin >> dayOfWeek;
    std::cout << "Input the year (yyyy): ";
    std::cin >> year;

    showCalendar(dayOfWeek, year);
}