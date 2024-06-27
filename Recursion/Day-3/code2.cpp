// Bahut Important dry run karo bahhut bar 

#include <bits/stdc++.h>
using namespace std;

void printSubsequences(string str, int i, string output/*, vector<string> &ans*/)
{   
    // base case
    if (i == str.length())
    {
        // ans.push_back(output); // Store the subsequence in the vector
        cout << output << endl; // Print the subsequence
        return;
    }

    char ch1 = str[i];
    // include
    printSubsequences(str, i + 1, output + ch1/*, ans*/);
    // exclude
    printSubsequences(str, i + 1, output/*, ans*/);
}

int main()
{
    string n = "101"; // Use a string instead of a char array
    cout << "Subsequences of the string are: " << endl;
    
    vector<string> ans;

    printSubsequences(n, 0, ""/*, ans*/); // Start from index 0 with an empty output string
    
    return 0;
}
