#include<iostream>
using namespace std;

int main(){
    int n,e,i,c = 0;
    cout<<"Enter the no.of elements in array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the array :";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to find :";
    cin>>e;

    // A for loop for checking whether the given number is present or not
    for(i=0; i<n; i++){
        if(arr[i] == e){
            c++;         // If present, increase count by 1 else continue to search
            break;
        }
    }
    if(c){            // If element is found , print it's position
        cout<<"Element found at position "<<i+1;
    }
    else{
        cout<<"Element is not present in the array";
    }
    return 0;
}
