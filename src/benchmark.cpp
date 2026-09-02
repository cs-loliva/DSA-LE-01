#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include <string>
#include "sorts.h"
using namespace std;
using namespace std::chrono;

int main(int argc, char* argv[]) {
    if (arg < 3) {
        cerr << ""
        return 1;  
    }
    string filename = argv[1];
    string  algo = argv[2];

    ifstream file(filename);
    if(!file) {
        cerr <<
        return 1;  
    }
}
