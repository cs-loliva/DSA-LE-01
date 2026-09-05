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

    vector<int> data;
    int number;
    while (file >> number) {
        data.push_back(number);
    }
    file.close();

    auto start = high_resolution_clock::now();
    if (algo == "merge") {
        bubbleSort(data);
    } else if (algo == "merge") {
        mergeSort(data);
    } else {
        cerr << "Unknown algorithm: " << algorithm << "\n";
        return 1;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    //verify if sorted
    bool sortred = true;
    for (size_t i = 1; i < data.size(); i++) {
        if (data[i-1] > data[i]) {sorted = false; break;}
    }
    
}
