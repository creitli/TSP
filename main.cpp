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
    test->findOptimalPath();

    return 0;


}

