#include <queue>
#include <list>
#include <iostream>

using namespace std;
int Suma(const list<int> &L){
    int s = 0;
    for (auto it=L.cbegin(); it!=L.cend(); ++it){
        s+=*it;
    }
    return s;
}

queue<int> GetSumas(queue<list<int>> &ql){
    list<int>::iterator it;
    queue<int> resultado;
    while(!ql.empty()){
        resultado.push(Suma(ql.front()));
        ql.pop();
    }

    return resultado;
}

template <class T>
void imprimirCola(queue<T> q){
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}


int main(){
    queue<list<int>> C({{1,2,3},{4,5},{3,7,2}});
    queue<int> resultado = GetSumas(C);

    imprimirCola(resultado);
}