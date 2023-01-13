#ifndef HMODUL4_H_INCLUDED
#define HMODUL4_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(AF) ((AF.first))
#define nil NULL

typedef char infotype; // NIM : 1301213006 mod 4 = 2
typedef struct ElmList * address;


struct ElmList{
    infotype info;
    address next;
};

struct List{
    address first;
};

void createList_1301213006(List &AF);
address newElement_1301213006(infotype x);
void insertFirst_1301213006(List &AF, address p);
void show_1301213006(List AF);
void deleteLast_1301213006(List &AF, address p);
address deleteFirst_1301213006(List &AF);
//Lainnya...
void insertLast_1301213006(List &AF, address p);
void insertAfter_1301213006(address p, address Prec);
#endif // HMODUL4_H_INCLUDED
