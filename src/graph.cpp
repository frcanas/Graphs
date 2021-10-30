#include "graph.h"

// Class constructor
Graph::Graph(size_t n)
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

// Class destructor
Graph::~Graph()
{
    
}

// Add a node
void Graph::addNode(Node * node)
{
    Nodes[node->getID()] = node;
}

// Get a node
Node * Graph::getNode(unsigned int ID)
{
    return Nodes[ID];
}

// Add an arc
void Graph::addArc(Arc * arc)
{
    Arcs[arc->getFirstNode()->getID()][arc->getSecondNode()->getID()] = arc;
}

// Get an arc
Arc * Graph::getArc(Node * first_node, Node * second_node)
{
    return Arcs[first_node->getID()][second_node->getID()];
}