#include <iostream>

class Flower{
    public:
                                        // Constructors
        Flower();
        Flower(const std::string& name, int numPetals, float price);
                                        // Accessor functions
        std::string getName() const { return name; }
        int getNumPetals() const { return numPetals; }
        float getPrice() const { return price; }
                                        // Update functions
        void setName(const std::string& name) { this->name = name; }
        void setNumPetals(int numPetals) { this->numPetals = numPetals; }
        void setPrice(float price) { this->price = price; }
                                        // Overloading functions
        friend std::ostream& operator << (std::ostream& out, const Flower& f);

    private:
        std::string name;
        int numPetals;
        float price;
};

Flower::Flower(){
    name = "";
    numPetals = 0;
    price = 0.0;
}

Flower::Flower(const std::string& name, int numPetals, float price){
    this->name = name;
    this->numPetals = numPetals;
    this->price= price;
}

std::ostream& operator << (std::ostream& out, const Flower& f){
    out << std::endl << f.name << ", No Petals: " << f.numPetals << ", price: " << f.price << std::endl;
    return out;
}

int main(){
    Flower f1, f2("Apricot blossom", 6, 20.4);
    std::cout << f1 << f2;

    f1.setNumPetals(50);
    f2.setPrice(24.7);
    std::cout << f1 << f2;

    std::cout << f1.getName() << std::endl << f2.getName() << std::endl;

    return 0;
}