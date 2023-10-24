#include <queue>
#include <list>
#include <iostream>

using namespace std;

bool isomorficas(queue<int> &C, list<int> &L){
    if(C.size() !=L.size())
        return false;

    list<int>::iterator it = L.begin();
    bool par = false;

    while(!C.empty()){
        int a = C.front();
        C.pop();
        if (par && *it !=a)
            return false;
        ++it;
        par = !par;
    }
    return true;
}

int main(){
    queue<int> C({1,7,6,9,8,4});
    list<int> L({9,5,3,9,10,4});

    if (isomorficas(C,L))
        cout << "Son isomorficas" << endl;
    else
        cout << "No son isomorficas" << endl;
}