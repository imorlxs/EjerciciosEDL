#include <list>
#include <stack>
#include <iostream>

using namespace std;

template <class T>
bool estaEnLista(const list<T> &L, T x){
    for (auto it=L.cbegin(); it!=L.cend(); ++it){
        if (x==*it)
            return true;
    }
    return false;
}

bool es_permutacion(const list<int> &L, const stack<int> &q){
    if (L.size() != q.size())
        return false;

    stack<int> aux(q);
    while(!aux.empty()){
        int x = aux.top();
        aux.pop();
        if (!estaEnLista(L,x))
            return false;
    }
    return true;
}

int main(){
    stack<int> q({5,4,1,2});
    list<int> L({1,2,5,4});

    if(es_permutacion(L,q))
        cout << "Es permutacion" << endl;
    else
        cout << "No es permutacion" << endl;
    return 0;
}