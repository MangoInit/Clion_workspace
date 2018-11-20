#include <iostream>
#include <string>
#include <sstream>
#include "test.h"


//函数模板 & stringstream
template <typename out_type, typename in_value>
out_type convert(const in_value &t)
{
    std::stringstream stream;
    stream << t;
    out_type result;
    stream >> result;
    return result;
}

int main()
{
    std::string str = "1.86";
    double d = convert<double>(str);
    std::string s = convert<std::string>(9000.0);
    std::cout << d << std::endl << s << std::endl;

    test<int> int_test;
    int_test.push(1);
    int_test.push(2);
    while(!int_test.isEmpty())
    {
        printf("num:%d\n", int_test.pop());
    }

    return 0;
}