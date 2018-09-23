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
        degree = deg;
        coefficients = new int[deg+1];
        for (int i = 0; i <= deg; i++)
            coefficients[i] = 0;
    }

    //printing
    void print()
    {
        cout << coefficients[degree] << "x^" << degree << " + ";
        for (int i = degree-1; i >= 0; i--)
            cout << " + " << coefficients[i] << "x^" << i;
        cout << endl;
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
    Polynomials* operator+(const Polynomials& p2)
    {
        int degree;
        if (this->degree >= p2.degree)
            degree = p2.degree;
        else
            degree = this->degree;

        Polynomials *p = new Polynomials(degree);
        p->coefficients = new int[p->degree+1];

        for (int i = p->degree; i >= 0; i--)
            p->coefficients[i] = this->coefficients[i]+p2.coefficients[i];
        return p;
    }

    //multiplication
    Polynomials* operator*(const Polynomials& p2)
    {
        Polynomials * p = new Polynomials(this->degree + p2.degree);
        for ( int i = 0; i <= this->degree; i++)
            for ( int j = 0; j <= p2.degree; j++)
                p->coefficients[i+j] += this->coefficients[i] * p2.coefficients[j];
        return p;
    }

    //evaluation for given argument
    int Evaluate()
    {
        int x;
        int sum;
        cout << "\nEnter the value of x: ";
        cin >> x;
        for (int i =0; i < degree; i++)
            int sum = sum + this->coefficients[i]*pow(x,degree-i);
        return sum;
    }

    void setCoefficients()
    {
        int coefficient;
        cout << "Enter coefficients of your polynomial: " << endl;
        for (int i = 0; i <= degree; i++)
        {
            cout << "x^" << i << ": ";
            cin >> coefficient;
            coefficients[i] = coefficient;
        }
    }

};


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
    int d1 = 0;
    int d2 = 0;

    cout << "First polynomial\n" << "What is the degree of your first polynomial? ";
    cin >> d1;
    Polynomials p1(d1);
    p1.print();
    p1.setCoefficients();
    p1.print();
    cout << "\nSecond polynomial\n" << "What is the degree of your second polynomial? ";
    cin >> d2;
    Polynomials p2(d2);
    p2.setCoefficients();
    p2.print();
    /*Polynomials result((d1 > d2) ? d1 : d2);
    Printing(&p1, &p2);
    Result(&p1, &p2, &result); */
    Polynomials * result = p1 * p2;
    result->print();


    return 0;
}