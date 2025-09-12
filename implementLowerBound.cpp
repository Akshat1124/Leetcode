int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;  // default = n, in case all elements < x

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ans = mid;      // mid could be the lower bound
            high = mid - 1; // go left to find smaller index
        } 
        else {
            low = mid + 1;  // go right
        }
    }

    return ans;
}