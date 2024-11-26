#include<bits/stdc++.h>
using namespace std;

int knapsack(int values[], int weights[], int capacity, int n)
{
    // Use fixed-size array for this example
    int knap[n+1][capacity+1];
    
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=capacity; j++)
        {
            if(i==0 || j==0) 
                knap[i][j] = 0;
            else if(j < weights[i-1])
                knap[i][j] = knap[i-1][j];
            else
                knap[i][j] = max(values[i-1] + knap[i-1][j-weights[i-1]], knap[i-1][j]);
        }
    }
    
    cout << "Knapsack Matrix\n";
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=capacity; j++)
        {
            cout << knap[i][j] << " ";
        }
        cout << endl;
    }
    
    return knap[n][capacity];
}

int main()
{
    int values[]= {4,3,6,5,5};
    int weights[]= {3,2,5,4,3};
    int capacity = 5;
    int n = 5;
    cout << "Best possible profit: " << knapsack(values, weights, capacity, n) << endl;
}
