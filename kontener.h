#ifndef KONTENER_H_INCLUDED
#define KONTENER_H_INCLUDED
#include "dane.h"

struct kontener
{
private:
    struct Node
    {
        dane info;
        Node* next;
        Node(dane a,Node* n = NULL)
        {
            this->info = a;
            this->next = n;
        }
    };
    Node* start;
    Node* last;
    int counter;
    double sumaZyskow;
public:
    void print();
    kontener();
    ~kontener();
    void add(dane a);
    void sortDesc();
};


#endif // KONTENER_H_INCLUDED
