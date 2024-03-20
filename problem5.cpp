#include "iostream"
using namespace std;

int main(){
    int n, c, m;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    m = arr[n-1];
    for(int i = n-2; i > -1; --i){
        c = arr[i];
        arr[i] = m;
        if(c > m) m = c;
    }
    arr[n-1] = -1;
    for(int i:arr)cout << i << " ";

}
