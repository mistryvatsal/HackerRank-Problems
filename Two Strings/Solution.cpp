#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1,string s2) {
    int m = s1.size();
    int n = s2.size();

    const char* arr1 = s1.c_str();
    const char* arr2 = s2.c_str();

    unordered_map<char, char> map;

    for(int i=0; i<m-1; ++i) {
        map[arr1[i]] = arr1[i+1];
    }

    for(int i=0; i<n; ++i) {
        if(map[arr2[i]] != '\0') return "YES";
    }
    return "NO";
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        cout << result << "\n";
    }

}