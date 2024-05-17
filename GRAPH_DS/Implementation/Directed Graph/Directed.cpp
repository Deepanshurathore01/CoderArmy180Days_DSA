#include<iostream>
#include<vector>
using namespace std;

// Adjacency matrix 
// directed unweighted graph
// directed weighted graph

int main()
{
  int vertex, edges;
  cin>>vertex>>edges;
// directed unweighted graph
  // vector<vector<bool> >AdjMatrix(vertex ,vector<bool>(vertex,0));

// directed weighted graph
  vector<vector<int> >AdjMatrix(vertex ,vector<int>(vertex,0));

  // int u ,v;
  int u ,v,weight;
  for(int i=0;i<edges;i++)
  {
    cin>>u>>v>>weight;
    AdjMatrix[u][v]=weight;
  }

  for(int i=0;i<vertex;i++)
  {
    for(int j=0;j<vertex;j++){
      cout<<AdjMatrix[i][j]<<" ";
    }
    cout<<endl;
  }
}