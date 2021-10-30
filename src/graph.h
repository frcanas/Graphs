#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include "arc.h"

using namespace std;

// Graph class
class Graph
{

    // Create private attributes
    private:

        // Declare the sets of nodes and arcs
        unordered_map<unsigned int, Node *> Nodes;
        unordered_map<vector<unsigned int>, Arc *> Arcs;

    // Create getters, setters and the constructor
    public:

        // Add a node
        void addNode(Node * node)
        {
            Nodes[node->getID()] = node;
        }

        // Get a node
        Node * getNode(unsigned int ID)
        {
            return Nodes[ID];
        }

        // Add an arc
        void addArc(Arc * arc)
        {
            vector<unsigned int> IDs = { arc->getFirstNode()->getID(), arc->getSecondNode()->getID() };
            Arcs[IDs] = arc;
        }

        // Get an arc
        Arc * getArc(unsigned int ID1, unsigned int ID2)

};

#endif