int maxProfit(int* prices, int pricesSize) {
    int buy = prices[0]; int sold = prices[0]; int last = pricesSize - 1; int profit = 0;
    int i = 0;
    for (i = 0; i < last; i++)
    {
        if (prices[i] > prices[i + 1])
        {
            profit += (sold - buy);
            buy = prices[i + 1];
        }
        sold = prices[i + 1];
    }
    profit += (sold - buy);
    return profit;
}
int main()
{
    return 0;
}