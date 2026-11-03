#include <iostream>
#include "Point.h"
#include "Graph.h"
#include "TSP.h"
#include "TSPEnum.h"
#include "TSPNNH.h"

int main(int argc, char* argv[]) {
    string mode = argv[1];
    string inputFile = argv[2];
    TSP* run;
    if(mode == "-e") {
        run = new TSPEnum();
    }else if (mode == "-n") {
        run = new TSPNNH();
    }else {
        cerr << "Inkorrektes Mode input: wähle -e für Enum oder -n für NNH";
    }
    run->graph.readFile(inputFile);
    run->graph.createGraph();
    run->RunTimeAnalysisOptimalPath();


/*
    TSP* test = new TSPEnum();
    TSP* test2 = new TSPNNH();
    test->graph.readFile("test.txt");
    test->graph.createGraph();

    test->RunTimeAnalysisOptimalPath();
    test2->graph.readFile("test.txt");
    test2->graph.createGraph();
    test2->RunTimeAnalysisOptimalPath();
    */
    
    return 0;
}

