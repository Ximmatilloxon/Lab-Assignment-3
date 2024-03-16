#include "iostream"
using namespace std;

void sortArray(int arr[], int l, int r){
    if(l < r){
        int last = arr[r], i = l - 1;
        for(int j = i; j < r - 1; j++){
            
        }
    }
}

int main(){
    int n, m = NULL;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {cin >> arr[i];}
    sortArray(arr, 0, n-1);
}
