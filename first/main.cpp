#include <iostream>
using namespace std;

class Base
{
public:
    int a;
    Base();    //构造函数
    void coutout()
    {
        cout << "Mango\n" << endl;
    }
    Base operator-(const Base& b)
    {
        Base base;
        base.a = this->a - b.a;
        return base;
    }
};
Base::Base()
{
    cout << "What happned?" << endl;
}
class Shape: virtual public Base    //虚继承
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:
    int width;
    int height;
};
class PaintCost: virtual public Base
{
public:
    int getCost(int area)
    {
        return area * 70;
    }
};

class Rectangle: public Shape, public PaintCost //多继承
{
public:
    int getArea()
    {
        return (width*height);
    }
};


char * buildstr(char c, int n)
{
    char *pstr = new char [n+1];
    pstr[n] ='\0';
    while(n-->0)
    {
        pstr[n] = c;
    }
    return pstr;
}
int main()
{
    Rectangle Rect;
    int area;
    Rect.setHeight(7);
    Rect.setWidth(5);

    area = Rect.getArea();

    cout << "Total area: " << Rect.getArea() << endl;
    cout << "Total paint cost: $" << Rect.getCost(area) << endl;
    Rect.coutout();

    Base a,b,c;
    a.a = 5;
    b.a = 3;
    c = a-b;
    cout << "运算符重载" << c.a << endl;

    int time;
    char ch;
    cin >> ch;
    cin >> time;
    char *ps = buildstr(ch, time);
    cout << ps << endl << *ps << endl;
    return 0;
}