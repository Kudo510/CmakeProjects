#include <iostream>
#include <vector>
#include <string>

using namespace std;


/////////////////  Images  //////////////////////

int main() {

    vector<string> msg {"Congrat", "on", "building", "C++ code", "using Cmake"};
    for (const string& word: msg)
    {
        cout<< word<< " ";
        cout<<endl;
    }
    return 0;
}