#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 10
int chkTgt(int sz, int arr[sz], int tgt);
int main()
{
    int sz = 6;
    int arr[6] = {1,3, 5, 7, 8, 9};
    int tgt = 4;
    int indx = chkTgt(sz, arr, tgt);
    //printf("\nTest line PS7Qsn5");
    return 0;
}

int chkTgt(int sz, int arr[sz], int tgt)
{
    int indx = 0;
    bool tgtNotFound = true;
    for(int i = 0; i < sz && tgtNotFound; i++)
    {
        if( arr[i] >= tgt)
        {
            tgtNotFound = false;
            indx = i;
        }
    }

}
