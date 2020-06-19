#include <iostream>
using namespace std;

int main(){
    int input[10], output[10], count, i;

    cin >> count;

    for(i = 0; i < count; i++){
        cin >> input[i];
    }

    // Copy numbers from inputArray to outputArray in
    // reverse order
    for(i = 0; i < count; i++){
        output[i] = input[count-i-1];
    }
    // Print Reversed array
    for(i = 0; i < count; i++){
        cout << output[i] << " ";
    }

    return 0;
}
