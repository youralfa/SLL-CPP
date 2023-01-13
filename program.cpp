#include "HModul4.h"

void createList_1301213006(List &AF){
    first(AF) = nil;

}
address newElement_1301213006(infotype x){
    address P = new ElmList;
    info(P) = x;
    next(P) = nil;
    return P;

}
void insertFirst_1301213006(List &AF, address p){
    if (first(AF) == nil){
        first(AF) = p;
    }else{
        next(p) = first(AF);
        first(AF) = p;
    }
}
void show_1301213006(List AF){
    if (first(AF) != nil){
        address p = first(AF);
        while (p != nil){
            cout << info(p) << " ";
            p = next(p);
        }
        cout << endl;
    }else{
        cout << "List Kosong" << endl;
    }
}

void deleteLast_1301213006(List &AF, address p){
    address q;

    if (first(AF) ==  nil){
        p = nil;
        cout << "List Kosong" << endl;
    }else if (next(first(AF)) ==  nil){
        p = first(AF);
        first(AF) = nil;
    }else{
        q = first(AF);
        p = first(AF);
        while (next(p) != nil){
            q = p;
            p = next(p);
        }
        next(q) = nil;
    }

}

address deleteFirst_1301213006(List &AF){
    address p;
    p = first(AF);
    first(AF) = next(p);
    next(p) = nil;
    return p;
}
//Lainnya....
void insertLast_1301213006(List &AF, address p){
    address last;
    last = first(AF);
    while (next(last) != nil ){
        last = next(last);
    }
    //next(last) = p;
    insertAfter_1301213006(p, last);
}

void insertAfter_1301213006(address p, address Prec){
    next(p) = next(Prec);
    next(Prec) = p;
}



