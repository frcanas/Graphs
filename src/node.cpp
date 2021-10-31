#include "node.h"

// Initialize the id's to 0
size_t Node::next_id = 0;

// Class constructor
Node::Node(size_t _attributes)
{
    const size_t temp = _attributes;
    setID(next_id);
    next_id++;
    attributes.resize(_attributes,0);
}

// Class destructor
Node::~Node()
{

}

// Setter for node's ID
void Node::setID(size_t _id)
{
    id = _id;
}

// Getter for node's ID
size_t Node::getID()
{
    return id;
}

// Setter for an attribute
void Node::setAttribute(size_t index, double value)
{
    if (attributes.size() <= index)
    {
        attributes.resize(index+1);
    }
    attributes[index] = value;
}

// Getter for an attribute
double Node::getAttribute(size_t index)
{
    if (attributes.size() > index)
    {
        return attributes[index];
    }
}