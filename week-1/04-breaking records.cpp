vector<int> breakingRecords(vector<int> scores) {
    int _minValue = scores[0];
    int _maxValue = scores[0];
    int _min = 0;
    int _max = 0;
    for (int i = 1; i < scores.size(); i++){
        if (scores[i] < _minValue) {
            _min++;
            _minValue = scores[i];
        }
        if (scores[i] > _maxValue){
            _max++;
            _maxValue = scores[i];
        }
        
    }
    vector<int> result;
    result.push_back(_max);
    result.push_back(_min);
    return result;
}
