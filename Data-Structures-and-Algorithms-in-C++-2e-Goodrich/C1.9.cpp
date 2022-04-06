#include <iostream>
#include <vector>

class Vector2{
    public:
        Vector2() { x = 0.0; y = 0.0; }
        Vector2(double x, double y) { this->x = x; this->y = y; }
        ~Vector2() {}

        friend std::ostream &operator << (std::ostream &out, const Vector2 &v);
        friend Vector2 operator + (const Vector2 &v1, const Vector2 &v2);
        friend Vector2 operator * (const Vector2 &v, int k);
        friend Vector2 operator * (int k, const Vector2 &v);
        friend double operator * (const Vector2 &v1, const Vector2 &v2);

    private:
        double x;
        double y;
};

std::ostream& operator << (std::ostream &out, const Vector2 &v){
    out << std::endl << "(" << v.x << "," << v.y << ")" << std::endl;
    return out;
}

Vector2 operator + (const Vector2 &v1, const Vector2 &v2){
    Vector2 v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    return v;
}

Vector2 operator * (const Vector2 &v, int k){
    Vector2 rv;
    rv.x = v.x * k;
    rv.y = v.y * k;
    return rv;
}

Vector2 operator * (int k, const Vector2 &v){
    Vector2 rv;
    rv.x = v.x * k;
    rv.y = v.y * k;
    return rv;
}

double operator * (const Vector2 &v1, const Vector2 &v2){
    return v1.x * v2.x + v1.y * v2.y;
}

int main(){
    Vector2 v1(1.0, 2.0);
    Vector2 v2(1.0, 2.0);

    std::cout << std::endl << "Vector 1: " << v1 << "Vector 2: " << v2 << std::endl;
    std::cout << "The addition of two vectors: " << v1 + v2 << std::endl;
    std::cout << "The multiplication of 3 times vector 1: " << 3*v1 <<std::endl;
    std::cout << "The dot product of two vectors: " << v1*v2 << std::endl;
}