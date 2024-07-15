#include <iostream>
#include <vector>
using namespace std;

int findPivot(const vector<int>& arr) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > arr[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;  // or return right; since left == right
}

int main() {
    vector<int> arr = {5,6,7,0,1,2,3,4};
int pivot =findPivot(arr);

cout << pivot << endl;
}



