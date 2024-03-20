#include "iostream"
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i) cin >> arr[i];
    int x, y, d = n - 1;
    cin >> x >> y;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(arr[i] == x && arr[j] == y){
                if(abs(j-i) < d) d = abs(j-i);
            }
        }
    }
    cout << d;
}
