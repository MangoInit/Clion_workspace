#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    map<string, map<int,int> > map1;
    pair<string, pair<int,int> > pair1;

    pair1.first = "hello";
    pair1.second.first = 1;
    pair1.second.second = 2;


    cout << pair1.first << endl;

    return 0;
}