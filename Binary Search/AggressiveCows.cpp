#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(int arr[], int n, int m, int mid) {
    int cow = 1; 
    int lastPosition = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] - lastPosition >= mid) {
            cow++;
            lastPosition = arr[i];
        }
    }

    return cow >= m;
}

int main() {
    int arr[] = {1, 2, 8, 4, 9};
    int n = 5;
    int m = 3;
    int ans = 0;

    sort(arr, arr + n); 

    int st = 1; 
    int end = arr[n - 1] - arr[0]; 

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid)) {
            ans = mid; 
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}
