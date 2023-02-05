int lonelyinteger(vector<int> a) {
    int res = 0;
    for (auto i: a){
        res = (res ^ i);
    }
    return res;
}

// using XOR
// time: O(N) and space: O(1)
