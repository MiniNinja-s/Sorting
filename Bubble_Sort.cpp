#include <iostream>
#include <array>
using namespace std;

array<int,5> Bubble_Sort( array <int,5> arr){
    bool swapped;
    int n = arr.size();
    for(int pass = 0;pass < n - 1;++pass){
        swapped = false;
        int *p_left = &arr[0];
        int *p_right = &arr[1];

        for(int i = 0;i < n - pass - 1;++i){
            if(*p_right < *p_left){
                *p_right = *p_right ^ *p_left;
                *p_left = *p_right ^ *p_left;
                *p_right = *p_right ^ *p_left;
                swapped = true;
            }
                p_left++;
                p_right++;
        }
            if (!swapped) break;
    }
    return arr;
}

int main(){
    array<int,5> arr = {-18, 0, 7, -10, 6};
    for(int& res : Bubble_Sort(arr)){
        cout << res << endl;
    }
}