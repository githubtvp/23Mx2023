#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void printNodeData(struct Node *aHead);
void insertNodeAtBegining(int aData, struct Node *aHead);

int main()
{
    struct Node *n1 = new Node();
    struct Node *n2 = new Node();
    struct Node *head = n1;
    n1->data = 3;
    n1->next = n2;
    n2->data = 5;
    n2->next = NULL;
    struct Node *temp = head;
    /*while (temp != NULL)//to print all node contents
    {
        cout << "\n Data : " << temp->data;// prints 3, 5
        temp = temp->next;
    }
    temp = head;
    cout << endl;
    while (temp->next != NULL)//to reach last node so one could manipulate or work with last node
    {
        cout << "\n Data : " << temp->data;// prints only 3
        temp = temp->next;
    }
    */
    cout <<endl;
    struct Node *n[5];
    for (int i = 0; i < 5; i++)
    {
        n[i] = new Node();
    }

    for (int i = 0; i < 5; i++)
    {
        n[i]->data = 2 * i;
        if (i < (5 - 1))
        {
            n[i]->next = n[i + 1];
        }
        else
        {
            n[i]->next = NULL;
        }
    }

    temp = n[0];
    for (int i = 0; i < 5; i++)
    {
        int theData = 3 * i;       
        insertNodeAtBegining(theData, temp);         
    }  
    head = temp; //n[0];
    printNodeData(head);

   /* temp = head;
    cout <<endl;
    while (temp!= NULL)
    {
        cout << "\n Data : " << temp->data;
        temp = temp->next;
    }
    */

    //  cout << "\n---End Test line ---";
    return 0;
}

void insertNodeAtBegining(int aData, struct Node *aHead)
{
    cout <<"\nhere 1 "<< endl;
    cout <<"\n aHead->data : "<< aHead->data << endl;

    int theData = aData;
    struct Node *temp = new Node();
    temp->data = theData;
    temp->next =aHead;    
    aHead = temp;  
    cout <<"\nhere 2 : "<< temp->data << endl;
    cout <<"\nhere 3 : "<< temp->next->data << endl;

}

void printNodeData(struct Node *aHead)
{
   struct Node *temp = aHead;
   cout <<endl;
    while (temp!= NULL)
    {
        cout << "\n Data : " << temp->data;
        temp = temp->next;
    }
}