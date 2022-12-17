#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int max_result = 0;
void lav(vector<int> a,vector<int> b)
{

}
int main()
{
    // # 0 5 1 3 0 0 given 
    // 7 => 7,  6 => 0
    // 1 => 5,  6 => 4
    // 5 => 5 , 6 => 0
    // 3 => 6 , 4 => 3
    // 6 => 6 , 4 => 0
    // 4 => 4 , 4 => 0

    vector<int> ar{7, 1, 5, 3, 6, 4};
    vector<int> sellingv;
    vector<int> profits;

    for(auto i = ar.begin();i !=ar.end();i++)
    {
        int purchasePrice = (*i);

        sellingv.assign(i, ar.end());
        sort(sellingv.begin(), sellingv.end(), greater<int> ());
        int sellingPrice1 = sellingv[0];
        int sellingPrice2 = sellingv[1];
        int it1 = find(i, ar.end(), sellingPrice1) - ar.begin();
        int it2 = find(i, ar.end(), sellingPrice2) - ar.begin();
        int  it = min(it1 ,it2);
        int sellingPrice = ar[it];
        int profit = sellingPrice - purchasePrice;
        profits.push_back(profit);

    }
        sort(profits.begin(), profits.end(), greater<int> ());
        
        for(auto &item: profits){
            cout << item << endl;
        }
        cout << "Max profit :" << profits[0] + profits[1] << endl;

        return 0;

}



    
 