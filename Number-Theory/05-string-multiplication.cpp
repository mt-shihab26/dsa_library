#include <bits/stdc++.h>
using namespace std;

template <typename tp>
void print(const vector<tp> &vc) {
    for (auto &ith : vc)
        cout << ith << " ";
    cout << '\n';}


long long string_multiplication(const vector<long long> &a, const vector<long long> &b) {
    vector<vector<long long>> al;
    int k = 0, i, j, len, m;
    for (i = b.size()-1; i >= 0; i--) {
        vector<long long> rs;
        len = a.size();
        for (j = 0; j < len; j++) {
            rs.push_back(b[i] * a[j]);
        }
        for (m = 0; m < k; m++) {
            rs.push_back(0);
        }
        k++;
        al.push_back(rs);
    }

    int len_al = al.size();
    k--;
    for (i = 0; i < len_al && k > 0; i++) {
        for (j = 0; j < k; j++) {
            al[i].insert(al[i].begin(), 0);
        }
        k--;
    }

    int len_ith = al[0].size();
    vector<long long> final_res;
    long long sum = 0;
    for (i = len_ith-1; i >= 0; i--) {
        for (j = 0; j < len_al; j++) {
            sum += al[j][i];
        }
        final_res.push_back(sum%10);
        sum /= 10;
    }
    reverse(final_res.begin(), final_res.end());

    long long res = 0;
    for (auto ith : final_res) {
        res = (res * 10) + ith;
    }
    return res;
}


string string_multiplication2(const string &a, const string &b) {
    vector<vector<long long>> al;
    int k = 0, i, j, len, m;
    for (i = b.size()-1; i >= 0; i--) {
        vector<long long> rs;
        len = a.size();
        for (j = 0; j < len; j++) {
            rs.push_back((b[i]-'0') * (a[j]-'0'));
        }
        for (m = 0; m < k; m++) {
            rs.push_back(0);
        }
        k++;
        al.push_back(rs);
    }

    int len_al = al.size();
    k--;
    for (i = 0; i < len_al && k > 0; i++) {
        for (j = 0; j < k; j++) {
            al[i].insert(al[i].begin(), 0);
        }
        k--;
    }

    int len_ith = al.front().size();

    bool is = false;

    string final_res;
    long long sum = 0;
    for (i = len_ith-1; i >= 0; i--) {
        for (j = 0; j < len_al; j++) {
            sum += al[j][i];
        }
        final_res += to_string(sum % 10);
        if (sum % 10 != 0) is = true;
        sum /= 10;
    }
    if (sum > 0) final_res += to_string(sum);
    reverse(final_res.begin(), final_res.end());

    if (is == false) return "0";

    return final_res;
}


int main() {
    vector<long long int> a = {1, 2, 3, 4};
    vector<long long int> b = {4, 3, 2, 1};

    long long int expect = 5332114;

    // long long int res = string_multiplication(a, b);


    string a2 = "1234", b2 = "4321";
    string res = string_multiplication2(a2, b2);

    cout << res << "\n";
    // cout << (res==expect) << "\n";
}