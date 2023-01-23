string timeConversion(string s) {
    string militaryTime = "00:00:00";
    //int h = stoi(s.substr(0, 2));
    int h = 10 * (s[0] - '0') + (s[1] - '0');
    militaryTime[3] = s[3];
    militaryTime[4] = s[4];
    militaryTime[6] = s[6];
    militaryTime[7] = s[7];
    if (h < 12 && s[8] == 'A') {
        militaryTime[0] = s[0];
        militaryTime[1] = s[1];

    }
    else if (h == 12 && s[8] == 'P') {
        militaryTime[0] = s[0];
        militaryTime[1] = s[1];
    }
    else if (h > 0 && s[8] == 'P') {
        //f
        string value = to_string(12 + h);
        militaryTime[0] = value[0];
        militaryTime[1] = value[1];
    }
    else if (h == 12 && s[8] == 'A') {
        militaryTime[0] = '0';
        militaryTime[1] = '0';
        
    }
    return militaryTime;
}
