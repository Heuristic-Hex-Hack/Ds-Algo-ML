#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,j,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // Reversing the array by swaping the numbers
    for(i=0,j=n-1 ;i<j ;i++,j--){
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
    }
    // To print the reversed array
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

