#include <iostream>

using namespace std;


#define info(P) (P)->info
#define next(P) (P)->next
#define first(P) ((P).first)
#define nil NULL


typedef int infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct List {
    adr first;
};


void createList(List &NB) {
    first(NB) = nil;
}

adr newElement(infotype x) {
    adr P = new element;
    info(P) = x;
    next(P) = nil;
    return P;
}

void insertFirst(List &NB, adr p) {
    if (first(NB) == nil) {
        first(NB) = p;
    } else {
        next(p) = first(NB);
        first(NB) = p;
    }
}

void show(List NB) {
    if (first(NB) != nil) {
        adr p = first(NB);
        while (p != nil) {
            cout<<info(p) <<" ";
            p = next(p);
        }
    } else {
        cout << "List Kosong" <<endl;
    }
}

adr deleteLast(List &NB) {
    adr p, q;
    if (first(NB) == nil) {
        p = nil;
        cout<<"List Kosong"<<endl;
    } else if (next(first(NB)) == nil){
        p = first(NB);
        first(NB) = nil;
    } else {
        q = first(NB);
        p = first(NB);
        while (next(p) != nil) {
                q=p;
                p=next(p);
            }
        next(q) = nil;
        }
    return p;
    }


int main()
{
    List NB;
    cout << "first(L) sebelum createList :" <<first(NB)<<endl;

    createList(NB);
    cout<<"first(L) setelah createList :"<<first(NB)<<endl ;
    cout<<endl;

    //newElement
    adr p;
    p = newElement(10);
    cout<<"info(P): "<<info(p) <<endl;
    cout<<"Next(P): "<<next(p) <<endl;
    cout << endl;

    //insertFirst
    cout<<"first (NB) sebelum insertFirst :" << first(NB)<<endl;
    insertFirst(NB, p);
    cout<<"first (NB) setelah insertFirst :" << first(NB)<<endl;
    cout<<"info First (NB): " << info(first(NB))<<endl;

    p = newElement(15);
    insertFirst(NB, p);
    cout<<"info First (NB): "<< info(first(NB)) << endl;
    cout<<endl;

    //show
    show(NB);

    p = newElement(230);
    insertFirst(NB, p);
    show(NB);
    cout<<endl;

    //delete last
    p = deleteLast(NB);
    show(NB);
    cout<<info(p)<<endl<<endl;

    deleteLast(NB);
    show(NB);
    cout<<info(p)<<endl<<endl;

    p = deleteLast(NB);
    show(NB);
    cout<<info(p)<<endl<<endl;
    return 0;
}
