#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <Windows.h>

#include "sort\sort_bubble.hxx"
#include "sort\sort_insert.hxx"
#include "sort\sort_selection.hxx"
#include "sort\sort_shell.hxx"

using namespace std;


int main(){
    int n=10;
    int a[]={49,38,65,97,76,13,27,49,55,4};

    printf("original :\n");
    out_sort(a,n);
    printf("\n");

    shell(a,n);

    //int h=((n/2)%2==0?(n/2-1):n/2);
    //while(h>0){
    //    cout<<h<<' '<<endl;
    //    h-=2;;
    //}

    system("pause");
    return 0;
}
