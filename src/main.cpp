#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include "function.h"

using namespace std;

int main(int argc, char * argv[])
{
        string str;  
        cout << "Введите строку :" << endl;  
        getline(cin, str);
        
	cout << function(str) << endl;
	
	return 0;
}
