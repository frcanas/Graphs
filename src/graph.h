#ifndef GRAPH_H
#define GRAPH_H

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
            Arcs[arc->getFirstNode()->getID()][arc->getSecondNode()->getID()] = arc;
        }

        // Get an arc
        Arc * getArc(Node * first_node, Node * second_node)
        {
            return Arcs[first_node->getID()][second_node->getID()];
        }

        // Class constructor
        Graph(size_t n)
        {
            // n is the number of nodes - in this constructor, we'll already reserve space for everything we'll need later
            Nodes.resize(n,NULL);
            Arcs.resize(n);
            vector<Arc *> temp(n,NULL);
            for (size_t i = 0; i < n; i++)
            {
                Arcs[i] = temp;
            }
        }

};

#endif