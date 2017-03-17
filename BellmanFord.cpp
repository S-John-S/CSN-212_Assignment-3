#include <bits/stdc++.h>
using namespace std;

struct Hako
{    int saisho , saigo, omosa ;
};
void Function(const Hako ArEdge[], int, int[], int, int);
int main() {
    ios_base::sync_with_stdio(0);
    // N =no of nodes, E=edge
    int N,E; cin>> N >> E; 
    int saisho; cin >> saisho;
    Hako ArEdge[E];
    int answer[N]; 
    //to store min omosa (weight)

    for(int i=0; i<E; i++) {
        cin>> ArEdge[i].saisho >> ArEdge[i].saigo >> ArEdge[i].omosa;
    }

    Function(ArEdge, E, answer, N, saisho);
    return 0;
}
void Function(const Hako ArEdge[], int E, int answer[], int N, int saisho) {
    for(int i=0; i<N; i++)
        answer[i]=INT_MAX;
