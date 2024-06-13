#include<iostream>
using namespace std;


string removeDuplicates(string s) {
        string ans = "";
        int size = s.length();

        for (int i = 0; i < size; i++) {
            char currChar = s[i];

            if (ans.empty()) {
                ans.push_back(currChar);
            } else if (currChar == ans.back()) {
                ans.pop_back();
            } else if (currChar != ans.back()) {
                ans.push_back(currChar);
            }
        }
        return ans;
    }



int main()
{
    string test = "hshsshhsshhaajfjsk";

    cout<<removeDuplicates(test)<<endl;
}