#ifndef GRAPH_H
#define GRAPH_H

#include <utility>
#include "arc.h"

using namespace std;

// Graph class
class Graph
{

    // Create private attributes
    private:

        // Declare the sets of nodes and arcs
        unordered_map<unsigned int,Node *> Nodes;
        unordered_map<pair<>, Arc *> Arcs;

    // Create ppublic attributes
    public:



};

#endif