#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 1, 3};
    int m = sizeof(arr);  // each ele - 4 bytes then 6 * 4 - 24 bytes
    int n = size(arr); // number of ele in array
    cout << n << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j] && i != j){
                cout << arr[i] << " ";
            }
        }
    }
    
    return 0;
}