#ifndef _INSERT
#define _INSERT
#include "..\assit.h"

void insert(int *t,int n){
    int i=1;
    while(i<n){
        int p=i;
        int temp=t[p];
        while(temp<t[p-1]){
            t[p]=t[p-1];
            p--;
        }
        t[p]=temp;
        out_sort(t,n);
        i++;
    }
}
 
#endif

