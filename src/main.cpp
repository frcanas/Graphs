#include "main.h"

using namespace std;

// Main function
int main()
{
   size_t n = 3;
   vector<Node *> nodes(n);
   vector<Arc *> arcs;
   arcs.reserve(n*(n-1));
   for (size_t i = 0; i < n; i++)
   {
      nodes[i] = new Node(0);
   }
   for (size_t i = 0; i < n; i++)
   {
      for (size_t j = 0; j < n; j++)
      {
         if (i != j)
         {
            arcs.push_back(new Arc(nodes[i],nodes[j],0));
            //arcs.back()->setAttribute(0,i);
            //arcs.back()->setAttribute(1,j);
         }
      }
   }
   cout << 3 << endl;
   cin >> n;
   Graph G(nodes,arcs);
   nodes.clear();
   arcs.clear();
   cout << 4 << endl;
   cin >> n;
   /*nodes.clear();
   arcs.clear();
   size_t numberOfNodes = G.getNumberOfNodes();
   for (size_t i = 0; i < numberOfNodes; i++)
   {
      cout << G.getNode(i)->getID() << endl;
   }
   for (size_t i = 0; i < numberOfNodes; i++)
   {
      for (size_t j = 0; j < numberOfNodes; j++)
      {
         if (i != j)
         {
            cout << G.getNode(i)->getID() << " " << G.getNode(j)->getID() << " " << G.getArc(G.getNode(i),G.getNode(j))->getAttribute(0) << " " << G.getArc(G.getNode(i),G.getNode(j))->getAttribute(1) << endl;
         }
      }
   }*/
   return EXIT_SUCCESS;
}