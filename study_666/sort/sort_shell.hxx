#ifndef _SHELL
#define _SHELL

#include "..\assit.h"

void shell(int *t,int n){
    int diff=((n/2)%2==0?(n/2-1):n/2);
    int temp;
    while(diff>=1){
        for(int i=diff;i<n;i++){
            for(int j=i;j>=diff&&t[j]<t[j-diff];j-=diff){
                temp=t[j];
                t[j]=t[j-diff];
                t[j-diff]=temp;
            }
        }
        diff-=2;
        out_sort(t,n);
    }
    
}
//shell sort,odd sequence
#endif
