#include <iostream>
#include "Point.h"
#include "Graph.h"
#include "TSP.h"
#include "TSPEnum.h"
#include "TSPNNH.h"

int main() {
    TSP* test = new TSPEnum();
    TSP* test2 = new TSPNNH();
    test->graph.readFile("test.txt");
    test->graph.createGraph();

    test->RunTimeAnalysisOptimalPath();
    test2->graph.readFile("test.txt");
    test2->graph.createGraph();
    test2->RunTimeAnalysisOptimalPath();
    return 0;


}

