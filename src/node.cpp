#include "node.h"

// Class constructor
Node::Node(size_t value, size_t params)
{
    setID(value);
    attributes.resize(params,0);
}

// Class destructor
Node::~Node()
{

}

// Setter for node's ID
void Node::setID(size_t value)
{
    id = value;
}

// Getter for node's ID
size_t Node::getID()
{
    return id;
}

// Setter for an attribute
void Node::setAttribute(size_t index, double value)
{
    if (attributes.size() > index)
    {
        attributes[index] = value;
    }
}

// Getter for an attribute
double Node::getAttribute(size_t index)
{
    if (attributes.size() > index)
    {
        return attributes[index];
    }
}