#include <iostream>

class AllKinds {
    public:
                    // Constructors
        AllKinds(int first = 1, long second = 1, float third = 1.1);
                    // Update functions
        void setFirst(int first) { this->first = first; }
        void setSecond(long second) { this->second = second; }
        void setThird(float third) { this->third = third; }
        long sum12() { return long(first) + second; }
        float sum13() { return float(first) + third; }
        float sum23() { return float(second) + third; }

                    // Accessor functions
        int getFirst() const { return first; }
        long getSecond() const { return second; }
        float getThird() const { return third; }

        friend std::ostream& operator << (std::ostream& out, const AllKinds& ak);
    private:
        int first;
        long second;
        float third;
};

AllKinds::AllKinds(int st, long nd, float rd){
    first = st;
    second = nd;
    third = rd;
}

std::ostream& operator << (std::ostream& out, const AllKinds& ak){
    out << std::endl << "1st: " << ak.first << std::endl
                    << "2nd: " << ak.second << std::endl
                    << "3rd: " << ak.third << std::endl;
    return out;
}

int main(){
    AllKinds *ak = new AllKinds();

    std::cout << *ak;

    std::cout << "Sum of 1st and 2nd is " << ak->sum12() << std::endl;
    std::cout << "Sum of 1st and 3rd is " << ak->sum13() << std::endl;
    std::cout << "Sum of 2nd and 3rd is " << ak->sum23() << std::endl << std::endl;

    delete ak;
}