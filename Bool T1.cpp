//
//  main.cpp
//  Andres Moguel
//
//  Created by Andres Moguel on 1/13/20.
//  Copyright © 2020 Andres Moguel. All rights reserved.
//

#include <iostream>

using namespace std;
bool uno (char p, char q, char r){
    return (p && (!q))|| !r;
}

bool dos (char a, char b, char c){
    bool res;
    if (!(a||b)&&(!a||c))
        res = 'T';
    else
        res = 'F';
    return res;
}

bool tarea1 (char p, char q){
    return p && (!q);
}

bool tarea2 (char p, char q){
    return (((!p)||(!q))||p);
}

bool tarea3 (char p, char q, char r){
    return (!(p&&q))||(r&&(!p));
}

bool tarea4 (char p, char q, char r){
    return (!(p&&q))||(q||r);
}

int main(){
    char p,q,r;
    p = 'V';
    q = 'F';
    r = 'F';
    
    bool
    resultado = tarea1(p,q);
       cout << endl << resultado;
    resultado = tarea2(p,q);
    cout << endl << resultado;
    resultado = tarea3(p,q,r);
    cout << endl << resultado;
    resultado = tarea4(p, q, r);
    cout << endl << resultado;
    return 0;
}


