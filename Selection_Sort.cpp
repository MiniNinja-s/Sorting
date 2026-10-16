#include <iostream>
#include <vector>
using namespace std;

vector<int> Selection_Sort(vector<int> arr) {
    int n = arr.size();

    for(int pass = 0; pass < n - 1; ++pass) {
        int minIndex = pass;

        // find index of minimum in [pass...n-1]
        for(int i = pass + 1; i < n; ++i) {
            if(arr[i] < arr[minIndex]) {
                minIndex = i;
            }
        }

        // XOR swap
        if(minIndex != pass) {
            arr[pass] = arr[pass] ^ arr[minIndex];
            arr[minIndex] = arr[pass] ^ arr[minIndex];
            arr[pass] = arr[pass] ^ arr[minIndex];
        }
    }
    return arr;
}

int main() {
    vector<int> arr = {-18, 0, 7, -10, 6};
    arr = Selection_Sort(arr);
    for(int& res : arr) {
        cout << res << ' ';
    }
}