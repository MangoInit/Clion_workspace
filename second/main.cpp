//
// Created by mango on 8/11/18.
//

#include <iostream>
#include <array>
#include "LinkedList.h"
using namespace std;

int main ()
{
    //-----------------------------------------------
    //--这是1维数组
    array<int,5> myarray={1,2,3,4,5};
    //-----------------------------------------------
    cout <<"myarray="<<endl;
    for (size_t n=0; n<myarray.size(); n++)
    {
        cout << myarray[n] <<'\t';
        //cout << myarray.at(n) << '\t';  //等价上行
    }
    cout << endl;
    //-----------------------------------------------
    //-----------------------------------------------
    //--这是2维数组,共3行2列
    array<array<int,2>,3 > myarray2D={1,2,3,4,5,6};
    //-----------------------------------------------
    cout <<"myarray2D="<<endl;
    for (size_t m=0; m<myarray2D.size(); m++)
    {
        for (size_t n=0; n<myarray2D[m].size(); n++)
        {
            cout << myarray2D[m][n] <<'\t';
        }
        cout << endl;
    }
    cout << endl;
    //-----------------------------------------------

    cout << "Hello, World!" << endl;
    List L1;
    L1.Insert(1);
    L1.Insert(3);
    L1.Insert(5);
    L1.Insert(3);
    L1.Insert(8);
    L1.Insert(3);
    L1.print();
    L1.Search(2);
    L1.Delete(5);
    L1.print();
    L1.getValueAt(3);
    L1.setValueAt(0,2);
    L1.print();

    cout << "The End!" << endl;
    return 0;
}
