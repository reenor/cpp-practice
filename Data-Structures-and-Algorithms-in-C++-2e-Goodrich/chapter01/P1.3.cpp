#include <iostream>
#include <cstdlib>
#include <vector>

const int num_months = 12;
const int num_tests = 100;

class birthday{
    public:
        birthday() {}
        birthday(int dd, int mm){
            day = dd;
            month = mm;
        }
    friend bool operator == (const birthday &bd1, const birthday &bd2);
    friend std::ostream & operator << (std::ostream &out, const birthday &bd);

    private:
        int day;
        int month;
};

bool operator == (const birthday &bd1, const birthday &bd2){
    return (bd1.day == bd2.day && bd1.month == bd2.month);
}

std::ostream& operator << (std::ostream &out, const birthday &bd){
    out << bd.day << "\\" << bd.month;
    return out;
}

bool checkSameBirthday(const std::vector<birthday> &v, int &p1, int &p2){
    for(int i = 0; i < v.size() - 1; i++)
        for(int j = i + 1; j < v.size(); j++)
            if(v.at(i) == v.at(j)){
                p1 = i + 1;
                p2 = j + 1;
                return true;
            }
                
    return false;
}

void generateBirthday(std::vector<birthday> &v){
    int month, day;
    month = rand() % num_months + 1;
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day = rand() % 31 + 1;
        break;
        case 2:
            day = rand() % 28 + 1;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            day = rand() % 30 + 1;
        break;
    }
    birthday bd(day, month);
    v.push_back(bd);
}

void testBirthdayParadox(int n){
    int cnt = 0;
    std::cout << std::endl << "*** For a random group of " << n << " people ***" << std::endl;
    for(int test = 1; test <= num_tests; test++){ // Perform 10 experiments
        std::vector<birthday> v;
        int p1, p2;

        std::cout << "Test " << test << ":" << std::endl;
        for(int i = 0; i < n; i++){
            generateBirthday(v);
            std::cout << "\t" << i + 1 << ". " << v.back() << std::endl;
        }
        if(checkSameBirthday(v, p1, p2)){
            std::cout << "\t\t" << ">>> Two of them have the same birthday, " << p1 << " and " << p2 << std::endl;
            cnt++;
        }
    }
    std::cout << "Number of tests are: " << num_tests << std::endl;
    std::cout << "Number of tests that have the same birthday are: " << cnt << std::endl;
}

int main(){
    int n;
    srand(time(0)); // Use current time as seed for random generator
    std::cout << "Input number of people: ";
    std::cin >> n;
    testBirthdayParadox(n);
}

