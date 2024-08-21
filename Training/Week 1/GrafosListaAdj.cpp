#include <bits/stdc++.h>

using namespace std;

struct Node {
    int val;
    Node *dir;

    Node(int val) : val(val), dir(nullptr) {}
};

class GrafosListaAdj {
private:
    int n;
    vector<Node *> graph;

    void clearGraph() {
        for (int i = 0; i < n; ++i) {
            Node *current = graph[i];
            while (current != nullptr) {
                Node *next = current->dir;
                delete current;
                current = next;
            }
        }
    }

public:
    GrafosListaAdj(int x) : n(x) {
        graph.resize(n, nullptr);
    }
    
    ~GrafosListaAdj() {
        clearGraph();
    }
    
    void addEdgeUnique(int x, int y) {
        if (x >= 0 && x < n && y >= 0 && y < n && x != y) {
            Node *temp = new Node(y);
            temp->dir = graph[x];
            graph[x] = temp;
        }
    }
    
    void addEdge(int x, int y) {
        addEdgeUnique(x, y);
        addEdgeUnique(y, x);
    }

    void printLista() const {
        for (int i = 0; i < n; i++) {
            Node *temp = graph[i];
            cout << i << ": ";
            while (temp != nullptr) {
                cout << temp->val << ' ';
                temp = temp->dir;
            }
            cout << '\n';
        }
    }
};

int main() {
    GrafosListaAdj lista(5);
    
    lista.addEdge(1, 2);
    lista.addEdge(0, 1);
    lista.addEdge(4, 3);
    lista.addEdge(3, 1);
    
    lista.printLista();

    return 0;
}
