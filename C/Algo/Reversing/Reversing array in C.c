#include<stdio.h>
int main(){
    int arr[6] = {3,5,2,7,8,4};
    int i,j,t;
    for(i=0,j=5 ;i<j ;i++,j--){
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
    }
    for(i=0; i<6; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
