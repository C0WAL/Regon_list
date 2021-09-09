#include "kontener.h"
#include "dane.h"

kontener::~kontener()
{
    Node* run = start;
    Node *killer;
    while(run->next!=NULL)
    {
        killer = run;
        run = run->next;
        delete killer;
        counter--;
    }
}

kontener::kontener()
{
    counter = 0;
    start = NULL;
    last = NULL;
}

void kontener::print()
{
    Node* run = start;
    while(run!=NULL)
    {
        cout << run->info.getRegon() << endl;
        cout << run->info.getNazwa() << endl;
        cout << run->info.getMiasto() << " " << run->info.getKod() << endl;
        cout << run->info.getZysk() << endl;
        cout << endl;
        run = run->next;
    }
    cout << this->sumaZyskow/this->counter << endl;
}

void kontener::add(dane a)
{
    Node *new_node;
    new_node = new Node(a);
    if(start == NULL)
    {
        start = new_node;
        last = new_node;
    }
    else
    {
        last->next = new_node;
        last = new_node;
    }
    counter++;
    sumaZyskow +=new_node->info.getZysk();
}

void kontener::sortDesc()
{
    Node *node_1=start;
    Node *node_2=NULL;
    dane temp;

    while(node_1!=NULL)
    {
        node_2=node_1->next;
        while(node_2!=NULL)
        {
            if(node_1->info.getZysk() > node_2->info.getZysk())
            {
                temp = node_1->info;
                node_1->info = node_2->info;
                node_2->info = temp;
            }
            node_2=node_2->next;
        }
        node_1=node_1->next;
    }
}



