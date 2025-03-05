#include <string>
#include "function.h"
#include <iostream>

using namespace std;

struct atom_test
{
    string value, expected_answer;
};

int main() {
    struct atom_test Tests[] = { {"", ""},
                          {"42", "42"},
                          {"2 4", "4 2"},
                          {"мама мыла раму", "раму мыла мама"},
                          {"The quick brown fox jumps over the lazy dog",
                          "dog lazy the over jumps fox brown quick The"} };

    for (int i = 0; i < sizeof(Tests) / sizeof(Tests[0]); i++) {
    cout<<"##############################"<<endl;
    cout<<"Value: "<< Tests[i].value << endl;
    cout<<"Answer: "<< function(Tests[i].value) << endl;
    cout<<"Expected answer: "<< Tests[i].expected_answer << endl;
    cout << "Result: "<< (function(Tests[i].value)==Tests[i].expected_answer)<<endl;
    }
    cout<<"##############################"<<endl;
    return 0;
  }
