#include <iostream>
#include <math.h>
using namespace std;

class Polynomials
{
private:
    int *coefficients; //array where i store coefficients
    int degree;
public:
    //default constructor
    Polynomials(int deg)
    {
        degree = 0;
        coefficients = new int[deg];
        for (int i = 0; i < 10; i++)
            coefficients[i] = 0;
    }

    void SetCoeffs(int a, int b)
    {
        coefficients[a]=b;
    }

    //printing
    void print(Polynomials& p)
    {
        cout << coefficients << "x^" << degree;
        for (int i = degree - 1; i>=0; i--)
            cout << " + " << coefficients[i] << "x^" << i;
        return;
    }

    ~Polynomials() { delete coefficients; };

    //assigment operator
    Polynomials& operator=(const Polynomials& p)
    {
        degree = p.degree;
        for ( int i = 0; i <= degree; i++)
            coefficients[i]=p.coefficients[i];
        return *this;
    }

    //addition
    Polynomials operator+(const Polynomials& p2)
    {
        int degree;
        if (this->degree >= p2.degree)
            degree = this->degree;
        else
            degree = p2.degree;

        Polynomials p(degree);
        p.coefficients = new int[p.degree+1];

        for (int i = p.degree; i >=0; i--)
            p.coefficients[i] = this->coefficients[i]+p2.coefficients[i];
        return p;
    }

    //multiplication
    Polynomials operator*(const Polynomials& p2)
    {
        Polynomials p(this->degree + p2.degree);
        for ( int i = 0; i <= this->degree; i++)
            for ( int j = 0; j <= p2.degree; j++)
                p.coefficients[i+j] += this->coefficients[i] * p2.coefficients[j];
        return p;
    }

    //evaluation for given argument
    int Evaluate(Polynomials& p)
    {
        int x;
        int sum;
        cout << "\nEnter the value of x: ";
        cin >> x;
        for (int i =0; i < degree; i++)
            int sum = sum + p.coefficients[i]*pow(x,degree-i);
        return sum;
    }

};

void First(Polynomials *p1, int degree)
{
    int coefficient;
    cout << "Enter coefficients of your polynomial: " << endl;
    for (int i = 0; i <= degree; i++)
    {
        cout << "x^" << i << ": ";
        cin >> coefficient;
        if(coefficient != 0)
            p1->SetCoeffs(coefficient,i);
    }
}

void Printing( Polynomials *p1, Polynomials *p2)
{
    cout << "\nFirst polynomial: ";
    p1->print();
    cout << "\nSecond polynomial: ";
    p2->print();
    cout << endl;\
}

int main()
{
    int d1,d2;

    cout << "First polynomial\n" << "What is the degree of your first polynomial? ";
    cin >> d1;
    Polynomials p1(d1);
    First(&p1, d1);

    cout << "Second polynomial\n" << "What is the degree of your second polynomial? ";
    cin >> d2;
    Polynomials p2(d2);
    First(&p2, d2);

    /*Polynomials result((d1 > d2) ? d1 : d2);
    Printing(&p1, &p2);
    Result(&p1, &p2, &result); */

    return 0;
}