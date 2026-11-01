//
// Created by reitli on 30.10.2026.
//

#include "TSPNNH.h"

void TSPNNH::findOptimalPath() {
    std::cout << "TSPNNH::findOptimalPath" << std::endl;
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
    int tempPoint = 0;
    float distance;
    float minDistance = std::numeric_limits<float>::max();
    while (!pointsArray[tempPoint].visited) {
        pointsArray[tempPoint].visited = true;
        for (int i = 0; i < graph.vertices; i++) {
            if (!pointsArray[i].visited) {

            }
        }
    }
    //start with first point
    //look for closest neighbour
    //set closest neighbour as next stop
    //check from next point with the same method - until end of list is reached.
    //add distance of last point to start point to the list

}
