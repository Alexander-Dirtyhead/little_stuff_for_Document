#ifndef _SELECT
#define _SELECT
#include <limits.h>
#include "..\assit.h"

void select(int *t,int n){

    int i=0;
    while(i<n){
        int min=INT_MAX;
        int pos;
        for(int j=i;j<n;j++){
            if(min>t[j]){
                min=t[j];
                pos=j;
            }
        }
        t[pos]=t[i];
        t[i]=min;
        i++;
        out_sort(t,n);
    }
}
 
#endif

