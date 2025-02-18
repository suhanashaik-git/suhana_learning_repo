#include <iostream>

using namespace std;

int main() {
    int arr[4] = {10, 2, 13, 56};
    int first, second;
    if(arr[0] > arr[1]){
        first = arr[0];
        second = arr[1]; 
    } else {
        first = arr[1];
        second = arr[0];
    }

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        } else if(arr[i] > second){
            second = arr[i];
        }
    }
    cout << "First "<< first << "Second " << second << endl; 
    return 0;
}