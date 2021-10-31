#include "arc.h"

// Class constructor
Arc::Arc(Node * node1, Node * node2, size_t _attributes)
{
    setFirstNode(node1);
    setSecondNode(node2);
    attributes.resize(_attributes,0);
}

// Class destructor
Arc::~Arc()
{

}

// Setter for first node
void Arc::setFirstNode(Node * node1)
{
    first_node = node1;
}

// Getter for first node
Node * Arc::getFirstNode()
{
    return first_node;
}

// Setter for second node
void Arc::setSecondNode(Node * node2)
{
    second_node = node2;
}

// Getter for second node
Node * Arc::getSecondNode()
{
    return second_node;
}

// Setter for an attribute
void Arc::setAttribute(size_t index, double value)
{
    if (attributes.size() <= index)
    {
        attributes.resize(index+1);
    }
    attributes[index] = value;
}

// Getter for an attribute
double Arc::getAttribute(size_t index)
{
    if (attributes.size() > index)
    {
        return attributes[index];
    }
}