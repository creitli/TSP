//
// Created by reitli on 30.10.2026.
//

#ifndef TSP_TSP_H
#define TSP_TSP_H
#include "Graph.h"
#include <iostream>
#include <ostream>
#include <chrono>



class TSP {
    public:
    //pure virtual function, Implementierung erfolgt in den Subklassen
    virtual void findOptimalPath() = 0;
    void RunTimeAnalysisOptimalPath();
    Graph graph;
    vector<int> optimalPath;
    float distanceOptimalPath;
};



#endif //TSP_TSP_H
