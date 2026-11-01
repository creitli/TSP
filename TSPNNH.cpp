//
// Created by reitli on 30.10.2026.
//

#include "TSPNNH.h"

void TSPNNH::findOptimalPath() {
    std::cout << "TSPNNH::findOptimalPath" << std::endl;
    //helper class und helper array zum durchloopen und schnelles Finden von besuchten Elemente
    class pointsVisited {
        public:
        int point;
        bool visited;
    };
    pointsVisited pointsArray[graph.vertices];
    for (int i = 0; i < graph.vertices; i++) {
        pointsArray[i].point = i;
        pointsArray[i].visited = false;
    }

    int visitedPoints = 0;
    int actualPoint = 0;
    int nextPoint;
    float distance;
    float minDistance;
    //we start at the first point
    pointsArray[actualPoint].visited = true;
    optimalPath.push_back(actualPoint);
    distanceOptimalPath = 0;
    visitedPoints++;
    //then we find its closest neighbour
    while (visitedPoints < graph.vertices) {
        minDistance = std::numeric_limits<float>::max();
        for (int i = 0; i < graph.vertices; i++) {
            if ( !pointsArray[i].visited ) {
                distance = graph.adjacencyMatrix[actualPoint][i];
                if (distance < minDistance) {
                    minDistance = distance;
                    nextPoint = i;
                }
            }
        }
        distanceOptimalPath= distanceOptimalPath + minDistance;
        optimalPath.push_back(nextPoint);
        actualPoint = nextPoint;
        pointsArray[actualPoint].visited = true;
        visitedPoints++;
    }
    distanceOptimalPath = distanceOptimalPath + graph.adjacencyMatrix[actualPoint][0];
    //start with first point
    //look for closest neighbour
    //set closest neighbour as next stop
    //check from next point with the same method - until end of list is reached.
    //add distance of last point to start point to the list
    std::cout << distanceOptimalPath << std::endl;
    for (int i = 0; i < graph.vertices; i++) {
        std::cout << optimalPath[i] << " ";
    }
    std::cout << std::endl;
}