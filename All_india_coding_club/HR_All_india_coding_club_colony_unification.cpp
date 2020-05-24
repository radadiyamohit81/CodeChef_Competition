/*Disjoint Sets*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+100;
int parent[N];
int findParent(int x){
    if(parent[x] != x)parent[x] = findParent(parent[x]);
    return parent[x];
}

void join(int a, int b){
    parent[findParent(a)] = findParent(b);
}

int main(){
    int N,M,a,b;
    scanf("%d%d",&N,&M);
    for(int i = 1; i <= N; ++i)parent[i] = i;
    while(M--){
        scanf("%d%d",&a,&b);
        if(findParent(a) != findParent(b)){
            join(a,b);
            N--;
        }
        printf("%d\n",N);
    } 
    return 0;
}
/*
 * Test Case:
 * 		5 4
		1 2
		1 3
		2 3
		2 4
 * Ans:
 * 		4 3 3 2
 */
