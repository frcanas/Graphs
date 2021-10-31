#include "graph.h"

// Class constructor
Graph::Graph(vector<Node *> &_nodes, vector<Arc *> &_arcs)
{
    // We start out by reserving all the necessary space
    // for the nodes and the arcs, within the graph
    setNumberOfNodes(0);
    setNumberOfArcs(0);
    Nodes.resize(_nodes.size(),NULL);
    Arcs.resize(_nodes.size());
    
    // In this for loop, we'll add each node sequentially
    // We're doing it like this instead of just copying the
    // vector _nodes because the resulting vector will be sorted by id
    for (size_t i = 0; i < _nodes.size(); i++)
    {
        Arcs[i] = new vector<Arc *>(_nodes.size(),NULL);
        addNode(_nodes[i]);
    }

    // In this for loop, we'll add each arc from _arcs
    for (size_t i = 0; i < _arcs.size(); i++)
    {
        addArc(_arcs[i]);
    }
}

// Class destructor
Graph::~Graph()
{
    
}

// Add a node
void Graph::addNode(Node * node)
{
    // If the node's id is too large, we'll modify it and
    // make this node the last node in the list
    if (node->getID() >= Nodes.size())
    {
        node->setID(Nodes.size());
        Nodes.push_back(NULL);
    }
    Nodes[node->getID()] = node;
    setNumberOfNodes(getNumberOfNodes() + 1);
}

// Remove a node (and any associated arcs)
void Graph::removeNode(size_t id)
{
    // Count the number of arcs associated to this node
    size_t count = 0;
    for (size_t i = 0; i < getNumberOfNodes(); i++)
    {
        if ((*Arcs[i])[id] != NULL)
        {
            count++;
        }
        if ((*Arcs[id])[i] != NULL)
        {
            count++;
        }
    }

    // Change the graph's number of arcs and nodes accordingly
    setNumberOfArcs(getNumberOfArcs() - count);
    setNumberOfNodes(getNumberOfNodes() - 1);

    // Destroy all arcs leaving from node id
    Arcs[id]->clear();
    Arcs.erase(Arcs.begin() + id);

    // Destroy all arcs arriving to node id
    for (size_t i = 0; i < getNumberOfNodes(); i++)
    {
        // For every arc adjacent to the node we're removing, remove it
        Arcs[i]->erase(Arcs[i]->begin()+id);
    }

    for (size_t i = id; i < getNumberOfNodes(); i++)
    {
        // Now, we'll remove this node and pull all the following ones
        Nodes[i] = Nodes[i+1];
        Nodes[i]->setID(i);
    }

    Nodes.pop_back();
}

// Get a node
Node * Graph::getNode(unsigned int id)
{
    return Nodes[id];
}

// Add an arc
void Graph::addArc(Arc * arc)
{
    // If one of the arc's nodes is not in the graph, do nothing
    if ((Nodes[arc->getFirstNode()->getID()] == arc->getFirstNode()) && (Nodes[arc->getSecondNode()->getID()] == arc->getSecondNode()))
    {
        (*Arcs[arc->getFirstNode()->getID()])[arc->getSecondNode()->getID()] = arc;
        setNumberOfArcs(getNumberOfArcs() + 1);
    }
}

// Remove an arc
void Graph::removeArc(Node * first_node, Node * second_node)
{
    // If the requested arc exists, delete it
    if ((*Arcs[first_node->getID()])[second_node->getID()] != NULL)
    {
        (*Arcs[first_node->getID()])[second_node->getID()] = NULL;
        setNumberOfArcs(getNumberOfArcs() - 1);
    }
}

// Get an arc
Arc * Graph::getArc(Node * first_node, Node * second_node)
{
    return (*Arcs[first_node->getID()])[second_node->getID()];
}

// Set the number of nodes in the graph
void Graph::setNumberOfNodes(size_t _numberOfNodes)
{
    numberOfNodes = _numberOfNodes;
}

// Get the number of nodes in the graph
size_t Graph::getNumberOfNodes()
{
    return numberOfNodes;
}

// Set the number of arcs in the graph
void Graph::setNumberOfArcs(size_t _numberOfArcs)
{
    numberOfArcs = _numberOfArcs;
}

// Get the number of arcs
size_t Graph::getNumberOfArcs()
{
    return numberOfArcs;
}