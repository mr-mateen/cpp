#include <iostream>
using namespace std;

class Complex
{
private:
    double real = 0, imag = 0;

public:
    Complex(){};
    Complex(double r, double i)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex c);
    Complex operator+=(Complex &c);
    void display()
    {
        cout << real << " + " << imag << "j" << endl;
    }
    friend Complex operator-(double d, Complex c)
    {
        Complex temp;
        temp.real = d - c.real;
        temp.imag = c.imag;
        return temp;
    };
    friend Complex operator+(double d, Complex c)
    {
        Complex temp;
        temp.real = d + c.real;
        temp.imag = c.imag;
        return temp;
    }
};

Complex Complex::operator+(Complex c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
};

Complex Complex::operator+=(Complex &c)
{
    real += c.real;
    imag += c.imag;
}

int main()
{
    Complex c1(1, 2), c2(2, 2), c3, c4;
    c3 = c1 + c2;
    c3.display();
    c3 += c1;
    c3.display();

    double d = 10;
    c4 = d + c1;
    c4.display();

    return 0;
}