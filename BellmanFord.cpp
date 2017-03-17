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

    answer[saisho]=0;
    for(int i=0; i<N; i++) {
        for(int j=0; j<E; j++) {
            if(answer[ArEdge[j].saisho]+ArEdge[j].omosa<answer[ArEdge[j].saigo])
                answer[ArEdge[j].saigo]=answer[ArEdge[j].saisho]+ArEdge[j].omosa;
        }
    }
for(int i=0; i<E; i++) {
        if(answer[ArEdge[i].saisho]+ArEdge[i].omosa<answer[ArEdge[i].saigo]) {
            cout<<"Wrong answer inevitable"<<endl;
        }
    }

    cout<<"Min weight corresponding to each V => "<<saisho<<endl;
    cout<<"Vertex"<<" Cost"<<endl;
    for(int i=0; i<N; i++) {
        cout<<i<<"     "<<answer[i]<<endl;
    }
}
