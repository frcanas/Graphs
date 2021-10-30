#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include "node.h"
#include "arc.h"

using namespace std;

// Graph class
class Graph
{

    // Create private attributes
    private:

        // Declare the sets of nodes and arcs
        vector<Node *> Nodes;
        vector<vector<Arc *>> Arcs;

    // Create getters, setters and the constructor
    public:

        // Class constructor
        Graph(size_t n);

        // Class destructor
        ~Graph();

        // Add a node
        void addNode(Node * node);

        // Get a node
        Node * getNode(unsigned int ID);

        // Add an arc
        void addArc(Arc * arc);

        // Get an arc
        Arc * getArc(Node * first_node, Node * second_node);

};

#endif