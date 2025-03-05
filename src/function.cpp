#include "function.h"
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string function(string str){
        istringstream input{ str };
	vector<string> result;

	while (!input.eof()) {
		string substring;
		input >> substring;
		result.push_back(substring);
	}
	
	reverse(result.begin(), result.end());
        string result_string="";  
	for (const string& substring : result) {
	        result_string+=substring;
	        result_string+=" ";
		
	}
	result_string.erase(result_string.end()-1);
        return result_string;
}
