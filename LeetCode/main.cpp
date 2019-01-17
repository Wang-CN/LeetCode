#include <iostream>
#include <vector>
#include <fstream>
#include <map>
#include <algorithm>
#include <string>
#include "Solution.h"
using namespace std;


int main()
{
    int a = 9;
    int b = 5;
    int c = a^ b;
    cout << sizeof(a) << endl;
    cout << hex  << c << endl;
    cout << dec <<c << endl;

    int d = 2;
    cout << (d << 64) << endl;
    int f = 0x70000000;
    int g = 0x80000000;

    cout<<f << (f << 65) << endl;
    cout<< dec << g << " aaaa "<< (g << 2) << endl;
    system("pause");

}