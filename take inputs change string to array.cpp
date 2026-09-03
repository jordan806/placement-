#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<int> arr;

    if (s.front() == '[' && s.back() == ']') {
        s = s.substr(1, s.length() - 2);
    }

    stringstream ss(s);
    string temp;

    while (getline(ss, temp, ',')) {
        int num = stoi(temp);
        arr.push_back(num);
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
