#include<bits/stdc++.h>
using namespace std;

// asked in Zomato and Blinkit

// Search an Element in an Array
// simple two pointer approach 

// bool solve(vector<int>& n) {
//     int que = 4;
//     // using two pointer approach
//     // for (int i = 0; i < n.size(); i++) {
//     //     for (int j = i + 1; j < n.size(); j++) {
//     //         if (que == n[i] || que == n[j]) {
//     //             return true;
//     //         }
//     //     }
//     // }

     // using Binary search approach 
    int high = n.size() - 1;
    int low = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Corrected the mid calculation

        if (que == n[mid]) {
            return true;
        } else if (que < n[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return false;  // If the number is not found at any index
}

int main() {
    vector<int> n = {1, 2, 3, 5, 6, 7, 8, 9, 400};
    cout << solve(n);

    return 0;
}
