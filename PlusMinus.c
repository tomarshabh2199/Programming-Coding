# PROGRAMMING-CODDING
#COMPETITIVE CODES OF HACAKERRANK AND OTHERS


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    float pos=0,neg=0,zer=0;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(arr[arr_i]>0)
            pos++;
           else if(arr[arr_i]<0)
               neg++;
               else
               zer++;
    }
    printf("%.5f\n%.5f\n%.5f",(float)pos/n,(float)neg/n,(float)zer/n);
    return 0;
}
