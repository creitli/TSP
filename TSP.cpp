//
// Created by reitli on 30.10.2026.
//

#include "TSP.h"
#include <chrono>

void TSP::RunTimeAnalysisOptimalPath() {
    auto start = std::chrono::high_resolution_clock::now();
    findOptimalPath();
    auto end = std::chrono::high_resolution_clock::now();
    long long runtimeDiff = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    std::cout << runtimeDiff << " nanoseconds"<< std::endl;


}
