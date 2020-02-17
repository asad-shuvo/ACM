#include<iostream>
#include<set>
#define NODE 6
using namespace std;
int cntw=0,cntg=0,cntb=0;
int graph[NODE][NODE] = {
   {0, 1, 1, 1, 0,0},
   {0, 0, 1, 0, 0,0},
   {0, 0, 0, 0, 0,0},
   {0, 0, 0, 0, 1,0},
   {0, 0, 0, 0, 0,1},
   {0, 0, 0, 0, 0,0}
};

bool dfs(int curr, int wSet[],int gSet[],int bSet[]) {
   //moving curr to white set to grey set.
//   wSet.erase(wSet.find(curr));
   wSet[curr]=0;
   cntw--;
   gSet[curr]=1;
   cntg++;
//   gSet.insert(curr);

   for(int v = 0; v < NODE; v++) {
      if(graph[curr][v] != 0) {    //for all neighbour vertices
//         if(bSet.find(v) != bSet.end())
if(bSet[v]==1)
            continue;    //if the vertices are in the black set
//         if(gSet.find(v) != gSet.end())
if(gSet[v]==1)
            return true;    //it is a cycle
         if(dfs(v, wSet, gSet, bSet))
            return true;    //cycle found
      }
   }

   //moving v to grey set to black set.
//   gSet.erase(gSet.find(curr));
   gSet[curr]=0;
   cntg--;
//   bSet.insert(curr);
bSet[curr]=1;
cntb++;
   return false;
}

bool hasCycle() {
   //set<int> wSet, gSet, bSet;    //three set as white, grey and black
   int wSet[50]={0}, gSet[50]={0}, bSet[50]={0}; 
   for(int i = 0; i<NODE; i++)
      wSet[i]=1,cntw++;    //initially add all node into the white set

   while(cntw > 0) {
      for(int current = 0; current < NODE; current++) {
         if(wSet[current]==1)
            if(dfs(current, wSet, gSet, bSet))
               return true;
      }
   }
   return false;
}

int main() {
   bool res;
   res = hasCycle();
   if(res)
      cout << "The graph has cycle." << endl;
   else
      cout << "The graph has no cycle." << endl;
}
//#include<stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//int n;
//int mat[100][105];
//int wSet[100]={0},bSet[100]={0},gSet[100]={0};
//int cntw=0,cntb=0,cntg=0;
//bool dfs(int current){
//	wSet[current]=0;
//	cntw--;
//	gSet[current]=1;
//	cntg++;
//	int i;
//	for( i=1;i<=n;i++){
//		if(mat[current][1]!=0){
//		
//		if(bSet[current]==1)continue;
//		if(gSet[current]==1)return true;
//		dfs(i);
//	}
//	}
//	gSet[current]=0;
//	cntg--;
//	bSet[current]=1;
//	cntb++;
//	return false;
//}
//bool hasCycle(){
//	int i;
//	for( i=1;i<=n;i++){
//		wSet[i]=1;
//		cntw++;
//	}
//	while(cntw>0){
//	
//	for( i=1;i<=n;i++){
//		if(wSet[i]==1){
//			if(dfs(i))return true;
//		}
//	}
//}
//	return false;
//}
//int main(){
//	scanf("%d",&n);
//	int i,j;
//	for( i=1;i<=n;i++){
//		for( j=1;j<=n;j++){
//			scanf("%d",&mat[i][j]);
//		}
//	}
//	bool res=hasCycle();
//	if(res)printf("The graph has a cycle\n");
//	else printf("No cycle");
//}
//6
//0 1 1 1 0 0
//0 0 1 0 0 0
//0 0 0 0 0 0
//0 0 0 0 1 0
//0 0 0 0 0 1
//0 0 0 1 0 0
