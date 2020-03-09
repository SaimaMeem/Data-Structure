#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj [100][100];
int color[100];
int parent[100];
int dis[100];
int node , edge;

void bfs(int startingNode)
{
    for(int i = 0 ; i < node ; i++){
     color[i] = WHITE ;
     dis[i] = -324445;
     parent[i] = -1;
    }

   dis[startingNode] = 0;
   parent[startingNode] = -1;

   queue <int> q ;
   q.push(startingNode);
   cout << "\nBFS is : ";
    while(!q.empty()){
        int x = q.front();
        q.pop();
        color[x] = GRAY ;
        cout << x << " ";
        for(int i = 0 ; i < node ; i++){
            if(adj[x][i]== 1){
                if(color[i] == WHITE){
                 dis[i] = dis[x] + 1;
                 parent[i] = x;
                 q.push(i);
                }
            }
        }
        color[x] = BLACK;
    }
}

int main()
{
 cout << "Enter the number of nodes:";
 cin >> node;
 cout <<"Enter the number of edges:";
 cin >> edge;

int n1,n2;
  cout << "Enter adjacent nodes: ";
    for(int i = 0 ; i< edge ; i++){
       scanf("%d %d", &n1 , &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }
     cout<<"\nAdjacency Matrix:\n";
    for(int i = 0 ; i < node ; i++){
        for(int j = 0; j < node ; j++){
            cout << adj[i][j] << "\t";
        }
        cout << "\n" ;
    }
    bfs(0);
}
