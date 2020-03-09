#include<stdio.h>
#include<iostream>
using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj [100][100];
int color[100];
int parent[100];
int dis[100];
int times = 0;
int node , edge;

void dfsVisit(int x , int node)
{
    times =times+1;
    dis[x] = times;
    color[x] = GRAY;

    for(int i = 0 ; i< node ; i++)
    {
        if(adj[x][i] == 1)
        {
            if(color[x] == WHITE)
            {
                parent[i] = x;
                dfsVisit(i , node);
            }
        }
    }
    color[x] =BLACK;
    times=times+1;
    dis[x] = times;
    cout << x << " ";

}


void dfs(int node)
{
    for(int i = 0 ; i < node; i++){
        color[i] = WHITE ;
        parent[i] = 0;

    }
    times = 0;
    cout << "DFS is ";
    for(int i = 0 ; i<node ; i++)
    {
        if(color[i] == WHITE)
        {
            dfsVisit(i ,node);
        }
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
  dfs(node);
  return 0;
}
