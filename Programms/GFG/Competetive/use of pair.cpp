int main() {
    int tc;
    cin >> tc;
    for (; tc > 0; tc--) {
        int W;
        cin >> W;
        int n;
        cin >> n;
        vector<pair<int, int> > a (n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].first; a[i].second = i;
        }
        sort(a.begin(), a.end());
        for (int i = 0, j = n-1; i < n; i++) {
            while (j > 0 and a[i].first + a[j].first > W) j--;
            if (a[i].first + a[j].first == W and i < j) answer(a[i].second, a[j].second);
        }
    }
     
    return 0;
}

