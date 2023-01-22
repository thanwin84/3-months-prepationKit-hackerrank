void plusMinus(vector<int> arr) {
    int positiveCnt = 0, negetiveCnt = 0, zeroesCnt = 0;
    int n = arr.size();
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] > 0) positiveCnt++;
        else if (arr[i] < 0) negetiveCnt++;
        else zeroesCnt++;
    }
    cout << setprecision(6) << fixed;
    cout << (float)positiveCnt / (float)n << endl;
    cout << (float)negetiveCnt / (float)n << endl;
    cout << (float)zeroesCnt / (float)n << endl; 
}
