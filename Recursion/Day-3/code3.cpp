//coin change
#include <bits/stdc++.h>
using namespace std;

 int solve(vector<int>&coins, int amount) {
        if (amount == 0) {
            return 0;
        }

        int minCoinAns = INT_MAX;

        for (int i = 0; i < coins.size(); i++) {
            int amt = amount;
            int coin = coins[i];

            if (coin <= amount) {
                int recurionAns = solve(coins, amount - coin);

                if (recurionAns != INT_MAX) {
                    int coinsUsed = 1 + recurionAns;
                    minCoinAns = min(minCoinAns, coinsUsed);
                }
            }
        }

        return minCoinAns;
    }

    int coinChange(vector<int>& coins, int amount) {
        int ans = solve(coins, amount);

        if(ans == INT_MAX)
        {
            return -1;
        }
        return ans;
    }





int main()
{




    return 0;
}