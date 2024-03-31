/*Implement a class Complex which represents the Complex Number data type. Implement
the following
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to
print and read Complex Numbers.
 */
#include <iostream>
using namespace std;
class complex
{
    float real,img;
    public:
    complex()
    {real=0;
    img=0;
    }
    complex operator +(complex obj)//class operator 
    {
        complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
        
    }
    complex operator *(complex obj1)
    {
        complex temp1;
        temp1.real=(real*obj1.real)-(img*obj1.img);
        temp1.img=(real*obj1.img)+(img*obj1.real);
        return temp1;
        
    }
    friend istream & operator >> (istream &inn,complex &c)
    {
        cout<<"Enter the real part"<<endl;
        inn>>c.real;
        cout<<"Enter the imaginary  part"<<endl;
        inn>>c.img;
        return inn;
    }
    friend ostream & operator << (ostream &outt,complex &d)
    {
        outt<<d.real<<" + "<<d.img<<" i "<<endl;
        return outt;
    }
    };
int main()
{
    complex c1,c2,c3,c4;
 cout <<"\n Enter First Number : ";
 cin >> c1;
 cout <<"\n Enter Second Number : ";
 cin >> c2;
 //Addition
 c3 = c1+c2;
 cout << "\n The Addition Is : " <<c3 ;

 //Multiplication
 c4 = c1 * c2;
 cout << "\n The Multiplication Is :" <<c4 <<endl;
 return 0;
}
        
    
