//
// Created by reitli on 30.10.2026.
//

#include "TSPEnum.h"


void TSPEnum::findOptimalPath() {
    std::cout << "TSPEnum::findOptimalPath" << std::endl;
    float distance, minDistance;
    //miminimaler Entfernung mit max Value initialisieren, damit gleich erste Permutation diese Überschreibt
    minDistance = std::numeric_limits<float>::max();
    //hilfsArray zur Berechnung der Permutationen
    int pointsArray [graph.vertices];
    for (int i = 0; i < graph.vertices; i++) {
        pointsArray[i] = i;
    }

    //Erste Permutation ist bereits 0, 1, 2, 3, ...
    //nächste Permutation wird nach next_permutation() erstellt
    //bis alle Permutationen die mit 0 Anfangen berechnet sind

    while (pointsArray[0] == 0) {
        //Berechne Entfernung der aktuellen Permutation
        distance = 0;
        for (int i = 0; i < graph.vertices; i++) {
        //Entfernung letzter eintrag = Entfernung vom Starpunkt zur Endpunkt
            if (i == graph.vertices - 1) {
                distance = distance + (graph.adjacencyMatrix[i][0]);
            }else {
                distance = distance + graph.adjacencyMatrix[pointsArray[i]][pointsArray[i+1]];
            }
        } // ende Berechnung aktueller Entfernung
        //vergleiche mit bisherige minimum Entfernung
        //update den optimalen Weg mit neuen Einträge
        if (distance < minDistance) {
            minDistance = distance;
            optimalPath.clear();
            for (int i = 0; i < graph.vertices; i++) {
                optimalPath.push_back(pointsArray[i]);
            }
        }
        std::next_permutation(pointsArray, pointsArray + graph.vertices);
    }
    distanceOptimalPath = minDistance;
    std::cout << minDistance << std::endl;
    for (int i = 0; i < graph.vertices; i++) {
        std::cout << optimalPath[i] << " ";
    }
    std::cout << std::endl;
}
