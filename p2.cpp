#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    // # 0 5 1 3 0 0
    // 7 => 7, 5, 6 => 0
    // 1 => 5, 6, 4 => 4
    // 5 => 5, 6, 4 => 0
    // 3 => 3, 6, 4 => 0
    // 6 => 6, 6, 4 => 0
    // 4 => 4 ,4, 4 => 0
    vector<int> ar{7, 1, 5, 3, 6, 4};
    vector<int> sellingv;
    vector<int> sellingPricePos;
    vector<int> profits;
    int max_transiction_time = 3;
    int max_profit = 0;


    for(auto i = ar.begin(); i != ar.end(); i++) {
       int purchasePrice = (*i);

       sellingv.assign(i, ar.end());
       sort(sellingv.begin(), sellingv.end(), greater<int> ());

       for(int j = 0 ; j < max_transiction_time; j++){

            int it = find(i, ar.end(), sellingv[j]) - ar.begin();
            sellingPricePos.push_back(it);
       }
       sort(sellingPricePos.begin(), sellingPricePos.end());

       int sellingPrice = ar[sellingPricePos[0]];

       int profit = sellingPrice - purchasePrice;
       profits.push_back(profit);
    }

    sort(profits.begin(), profits.end(), greater<int> ());

    for(int j = 0 ; j < max_transiction_time; j++){

       max_profit = max_profit + profits[j];
    }

    cout << "Max profit: " << max_profit << endl;

    return 0;
}