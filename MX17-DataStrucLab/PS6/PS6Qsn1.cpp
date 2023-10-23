#include <iostream>
#include <string>

using namespace std;

void display(int *st, int sz);
void populateStack(int *st, int sz, int top);
int main()
{
    int sz;
    cout <<"\nEnter no of elements in stack"<<endl;
    cin >> sz;
    int *arrSt;
    arrSt = new int[sz];
    int top;
    populateStack(arrSt, sz, top);
    display(arrSt, sz);
    cout << "\n---End Test line ---";
    return 0;
}

void populateStack(int *st, int sz, int top)
 {
    int el;
    cout <<"\nEnter stack elements :\n";
    int cnt = 0;
    while(cnt < sz)
    {
         cin >> el;
       //  cout <<"\nEl : "<<cnt <<endl;
         st[cnt] = el;
         top++;
         cnt++;
    }
 }

void display(int *st, int sz)
{
    //cout <<"\nHere 1" << endl;
    for(int i = 0; i < sz; i++)
    {
        cout <<" " << st[i]<<",";
    }
}

