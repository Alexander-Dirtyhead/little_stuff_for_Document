#ifndef _BUBBLE
#define _BUBBLE

#include "..\assit.h"
int bubble(int *tar,int n){
    int t;
    int m=n;

    while(n>1){
    for(int j=0;j<n-1;j++)
        if(tar[j]>tar[j+1]){
            t=tar[j];
            tar[j]=tar[j+1];
            tar[j+1]=t;
        }
        n--;

        out_sort(tar,m);
    }

    return 1;
}

#endif