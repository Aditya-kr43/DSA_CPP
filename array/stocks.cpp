//This question from leetcode
//Stocks buy and sell
#include<iostream>
using namespace std;

void maxProfit(int *prices, int size)
{
    int bestBuy[100000];
    bestBuy[0] = INT8_MAX;
    for(int i = 1; i < size; i++)
    {
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
        //cout << bestBuy[i] << ",";
    }
  //  cout << endl;
  int maxProfit = 0;
  for(int i = 0; i < size; i++)
  {
    int currProfit = prices[i] - bestBuy[i];
    maxProfit = max(maxProfit, currProfit);
  }

  //time complexity is there is 2 for loops so O(n) + O(n) = O(2n) = O(n).
  cout << "max Profit = " << maxProfit << endl;
  
}
    

int main()
{
    int prices[6] = {7,1,5,3,6,4};
    int size = sizeof(prices)/sizeof(int);
    maxProfit(prices, size);
    return 0;
}