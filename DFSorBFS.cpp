#include <bits/stdc++.h>
using namespace std;


// // void printDFS(int** edges,int V,int sv,bool* visited)
// { cout<<sv<<" ";
//    visited[sv]=true;
 
//  for(int i=0;i<V;i++)
//  {     if(i==sv)
//          continue;
//     if(edges[sv][i]==1 && visited[i]==false)
//     {
//         printDFS(edges,V,i,visited);
//     }
    
//  }  
    
// }

void printBFS(int **edges,int V,int sv,bool *visited)
{
    queue<int> q;
    
   q.push(sv);
    
    while(!q.empty())
    {  int value=q.front();
       if(visited[value]==false)
           cout<<value<<" ";
     
       visited[value]=true;
        q.pop();
          for(int i=0;i<V;i++)
              if(edges[value][i]==1 && visited[i]==false)
              {q.push(i);
              
              }
    }
}



int main() {
    int V, E;
    cin >> V >> E;

 int** edges=new  int*[V];
    for(int i=0;i<V;i++)
    {
        edges[i]=new int[V];
        for(int j=0;j<V;j++)
            edges[i][j]=0;
    }
    
    for(int i=0;i<E;i++)
    {
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    
     bool *visited=new bool[V];
    // for(int i=0;i<V;i++)
    //     visited[i]=false;
    // printDFS(edges,V,0,visited);
    
      for(int i=0;i<V;i++)
        visited[i]=false;
    printBFS(edges,V,0,visited);
    
    

  return 0;
}
