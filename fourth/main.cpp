#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{

    map<string, string> mapStudent;
    map<string, string>::iterator iter;             //可修改元素
    map<string, string>::const_iterator iter_const; //不可修改元素
    map<string, string>::reverse_iterator iter_r;

    //insert
    mapStudent.insert(pair<string, string>("r000","student_0"));
    mapStudent["r111"] = "student_1";
    mapStudent.insert(map<string, string>::value_type("r222", "student_2"));
    mapStudent.insert(make_pair("r333", "student_3"));

    //it(map<string, string>::const_iterator)
    for(auto it = mapStudent.cbegin(); it!=mapStudent.cend(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }

    for(auto &elem: mapStudent)
        cout << elem.first << "  " << elem.second << endl;

    iter = mapStudent.begin();
    while(iter != mapStudent.end())
    {
        cout << iter->first << " : " << iter->second << endl;
        iter++;
    }

    for(iter_r=mapStudent.rbegin(); iter_r!=mapStudent.rend(); iter_r++)
    {
        cout << iter_r->first << "   " << iter_r->second << endl;
    }

    //delete
    iter = mapStudent.find("r111");
    mapStudent.erase(iter);
    cout << "r111's value is " <<  iter->second << endl;

    //find
    iter = mapStudent.find("r111");
    if(iter!=mapStudent.end())
    {
        cout << "Find, the value is " << iter->second << endl;
    }
    else
    {
        cout << "Do no Find" << endl;
    }

    //delete all
    for(iter=mapStudent.begin();iter!=mapStudent.end();)
    {
        cout<<"key: "<<iter->first <<" value: "<<iter->second<<endl;
        mapStudent.erase(iter++);
    }
    cout << "map: " << endl;
    //a == iter
    for(auto a=mapStudent.begin(); a!=mapStudent.end(); a++)
    {
        cout << a->first << " " << a->second << endl;
    }


    // Map中的swap不是一个容器中的元素交换，而是两个容器交换
    map <int, int> m1, m2;
    map <int, int>::iterator m1_it;

    m1.insert(make_pair(1,2));
    m1.insert(make_pair(3,4));
    m2.insert(make_pair(5,6));
    m2.insert(make_pair(7,8));


    for(auto &iter_m1:m1)
        cout << iter_m1.first << ": " << iter_m1.second << endl;
//    m1.swap(m2);
    swap(m1,m2);
    for(m1_it:m1)
        cout << m1_it.first << ": " << m1_it.second << endl;

    return 0;
}

//C++ Maps是一种关联式容器，包含“关键字/值”对
//begin()          返回指向map头部的迭代器
//clear(）         删除所有元素
//count()          返回指定元素出现的次数
//empty()          如果map为空则返回true
//end()            返回指向map末尾的迭代器
//equal_range()    返回特殊条目的迭代器对
//erase()          删除一个元素
//find()           查找一个元素
//get_allocator()  返回map的配置器
//insert()         插入元素
//key_comp()       返回比较元素key的函数
//lower_bound()    返回键值>=给定元素的第一个位置
//max_size()       返回可以容纳的最大元素个数
//rbegin()         返回一个指向map尾部的逆向迭代器
//rend()           返回一个指向map头部的逆向迭代器
//size()           返回map中元素的个数
//swap()            交换两个map
//upper_bound()     返回键值>给定元素的第一个位置
//value_comp()      返回比较元素value的函数