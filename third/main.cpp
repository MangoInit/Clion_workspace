#include <iostream>
#include <string>
#include <pthread.h>
using namespace std;

#define NUM_THREADS 5


/*
 * 虚函数与多态继承
 */


class A
{
public:
    void fn()
    {
        cout << "fn in A" << endl;
    }
    //virtual void v_fn()     //虚函数
    //{
    //    cout << "virtual fn in A" << endl;
    //}
    virtual void v_fn() = 0;    //纯虚函数，告诉编译器函数没有主体
};
class B: public A
{
public:
    void fn()
    {
        cout << "fn in B" << endl;
    }
    /* 当一个成员函数被声明为虚函数后，其派生类中的同名函数均为虚函数 */
    /* 动态链接/后期绑定 */
    virtual void v_fn()     //virtual可加可不加，加上程序清晰
    {
        cout << "virtual fn in B" << endl;
    }
};

void* say_hello(void* args)
{
    cout << "Hello, Mango!" << endl;
    return 0;
}

int main()
{
    A *a = new B();
    a->fn();
    a->v_fn();

    pthread_t tids[NUM_THREADS];
    for(int i = 0; i < NUM_THREADS; ++i)
    {
        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
        if(ret == 0)
        {
            cout << "pthread_create error: error_code = " << ret << endl;
        }
    }
    return 0;
}



/*  ------line------  */

class Shape
{
protected:
    int width, height;
public:
    Shape(int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }
    virtual int area()
    {
        cout << "Parent class area: " << endl;
        return 0;
    }
};

class Rectangle: public Shape
{
public:
    Rectangle(int a = 0, int b = 0): Shape(a,b){}
    int area()
    {
        cout << "Rectangle class area: " << endl;
        return (width * height);
    }
};

class Triangle: public Shape
{
public:
    Triangle(int a = 0, int b = 0): Shape(a, b){}
    int area()
    {
        cout << "Triangle class area: " << endl;
        return (width * height /2);
    }
};

//int main()
//{
//    Shape *shape;
//    Rectangle rec(10,7);
//    Triangle tri(10,5);
//
//    shape = &rec;
//    shape->area();
//
//    shape = &tri;
//    shape->area();
//    return 0;
//}
