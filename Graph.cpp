//
// Created by reitli on 29.10.2026.
//

#include "Graph.h"
    void Graph::readFile(string inputFile) {
        ifstream fileStream(inputFile);
        string line;
    cout << inputFile << endl;
//check if the filename is correct
    if (fileStream.is_open()) {
        cout << "filestream is working" << endl;
//the first line ist the number of inputs
        fileStream >> line;
        this->vertices = stoi(line);
//add the points to a vector - size expands on input size
        for (int i = 0; i < vertices; i++) {
            fileStream >> line;
            float x = std::stof(line);
            fileStream >> line;
            float y = stof(line);
            Point p(x, y);
            points.push_back(p);
        }
    }
        fileStream.close();
};

//lineare Algegra - Entfernung 2er Punkte mit Pythagoras
float Graph::getDistance(Point p, Point q) {
    return sqrt(pow(q.getX()-p.getX(), 2) + pow(q.getY()-p.getY(), 2));
}
//berechne die Entfernung alle Punkte voneinander - speichere die Entfernungen im Matrix
//Die hälfte der Werte könnte hier entfallen - aber so einfacher zum Rechnen???
void Graph::createGraph() {
    float distance;
    adjacencyMatrix.clear();
    adjacencyMatrix = vector<vector<float>>(vertices, vector<float>(vertices));
    for(int i = 0; i < vertices; i++){
        for(int j = 0; j < vertices; j++){
            if (j == i){
                distance = 0;
            }else{
                distance = getDistance(points[i], points[j]);
            }
            adjacencyMatrix[i][j] = distance;
        }
    }
}

void Graph::printGraph() {
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
