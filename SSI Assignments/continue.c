#include<stdio.h>

int main(){
    int  i=0;
    while(i<10){
        i++;
        if(i=6){
            continue;
        }
            printf("%d\n", i);
    }
    return 0;
}