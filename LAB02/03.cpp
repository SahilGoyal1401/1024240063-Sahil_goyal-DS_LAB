//a
#include <iostream>
using namespace std;

int missingNumberLinear(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
        sum += arr[i];
    return total - sum;
}

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5;
    cout << "Missing number is: " << missingNumberLinear(arr, n);
    return 0;
}


//b
#include <iostream>
using namespace std;

int missingNumberBinary(int arr[], int n) {
    int low = 0, high = n - 2;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == mid + 1)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low + 1;
}

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5;
    cout << "Missing number is: " << missingNumberBinary(arr, n);
    return 0;
}

