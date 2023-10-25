//
// Created by Isaac on 24/10/23.
//

#include "multipila.h"
list<int> multipila::Multitop(){
    list<int> loutput;
    list<stack<int>>::iterator it;
    for (it = datos.begin(); it!=datos.end(); ++it){
        int a = it->top();
        loutput.insert(loutput.end(), a);
    }

    return loutput;
}