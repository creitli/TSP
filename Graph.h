//
// Created by reitli on 29.10.2026.
//

#ifndef TSP_GRAPH_H
#define TSP_GRAPH_H
#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>
#include "Point.h"
using namespace std;


class Graph {
public:
    void readFile(string inputFile);
    float getDistance(Point p, Point q);
    void createGraph();
    void printGraph();
    vector <Point> points;



    int vertices;
    vector <vector<float>> adjacencyMatrix;
    
};



#endif //TSP_GRAPH_H
