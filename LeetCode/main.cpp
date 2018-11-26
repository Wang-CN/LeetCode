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
    cout << "Input the AllFile Name:" << endl;
    cin >> sAllFile;
    cout << "Input the OracleFile Name:" << endl;
    cin >> sNPInOracle;



    CompareDate(sAllFile, sNPInOracle);

    system("pause");

}