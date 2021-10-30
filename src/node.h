#ifndef NODE_H
#define NODE_H

using namespace std;

// Node class
class Node
{

    // Create private attributes
    private:

        // Declare the node's ID
        size_t id;
        // Declare the attributes vector
        vector<double> attributes;

    // Create getters, setters and the constructor
    public:

        // Setter for node's ID
        void setID(size_t value)
        {
            id = value;
        }

        // Getter for node's ID
        size_t getID()
        {
            return id;
        }

        // Setter for an attribute
        void setAttribute(size_t index, double value)
        {
            if (attributes.size() > index)
            {
                attributes[index] = value;
            }
        }

        // Getter for an attribute
        double getAttribute(size_t index)
        {
            if (attributes.size() > index)
            {
                return attributes[index];
            }
        }

        // Class constructor
        Node(size_t value, size_t params = 0)
        {
            setID(value);
            attributes.resize(params,0);
        }

};

#endif