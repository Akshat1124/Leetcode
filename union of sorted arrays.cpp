#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    vector<int> result;
    int i = 0, j = 0;
    int n = a.size(), m = b.size();

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            if (result.empty() || result.back() != a[i]) // avoid duplicates
                result.push_back(a[i]);
            i++;
        } else if (a[i] > b[j]) {
            if (result.empty() || result.back() != b[j])
                result.push_back(b[j]);
            j++;
        } else { // both are equal
            if (result.empty() || result.back() != a[i])
                result.push_back(a[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements
    while (i < n) {
        if (result.empty() || result.back() != a[i])
            result.push_back(a[i]);
        i++;
    }
    while (j < m) {
        if (result.empty() || result.back() != b[j])
            result.push_back(b[j]);
        j++;
    }

    return result;
}
