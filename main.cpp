#include "HModul4.h"


int main()
{
    List AF;

    cout << "first(AF) sebelum createList : " << first(AF) << endl;

    createList_1301213006(AF);
    cout << "first(AF) setelah createList : " << first(AF) << endl;
    cout << endl;

    //newElement
    address p, Prec;

    p = newElement_1301213006('R');
    cout << "info(P) : " << info(p) <<  endl;
    cout << "next(P) : " << next(p) <<  endl;
    cout << endl;

    //insertFirst
    cout << "first(AF) sebelum insertFirst :"<< first(AF) << endl;
    insertFirst_1301213006(AF, p);
    cout << "first(AF) setelah insertFirst : " << first(AF) << endl;
    cout << endl;
    cout<<"info first(AF) : " << info(first(AF)) << endl;

    //newElement
    p = newElement_1301213006('Z');
    insertFirst_1301213006(AF, p);
    cout << "info first(AF): " << info(first(AF)) << endl;
    cout << endl;

    //show
    show_1301213006(AF);

    //newElement
    p = newElement_1301213006('A');
    insertFirst_1301213006(AF, p);
    show_1301213006(AF);
    cout << "insertFirst : " << info(p) << endl;
    cout << endl;


    p = newElement_1301213006('I');
    insertFirst_1301213006(AF, p);
    show_1301213006(AF);
    cout << "insertFirst : " << info(p) << endl;
    cout << endl;

    //insertLast....
    p = newElement_1301213006('U');
    insertLast_1301213006(AF, p);
    show_1301213006(AF);
    cout << "insertLast : " << info(p) << endl;
    cout << endl;

    //insertAfter.... first(AF)
    p = newElement_1301213006('Y');
    insertAfter_1301213006(p, first(AF));
    show_1301213006(AF);
    cout << "insertAfter first(AF) : " << info(p) << endl;
    cout << endl;

    //insertAfter....
    p = newElement_1301213006('X');
    insertAfter_1301213006(p, next(first(AF)));
    show_1301213006(AF);
    cout << "insertAfter next(first(AF))  : " << info(p) << endl;
    cout << endl;

    //deleteFirst
    deleteFirst_1301213006(AF);
    show_1301213006(AF);
    cout << "deleteFirst : " << info(p) << endl << endl;

    //deleteLast
    deleteLast_1301213006(AF, p);
    show_1301213006(AF);
    cout << "deleteLast : " << info(p) << endl << endl;

    deleteLast_1301213006(AF, p);
    show_1301213006(AF);
    cout << "deleteLast : " << info(p) << endl << endl;

    deleteLast_1301213006(AF, p);
    show_1301213006(AF);
    cout << "deleteLast : " << info(p) << endl << endl;
    return 0;
}
