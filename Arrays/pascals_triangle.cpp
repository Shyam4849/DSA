#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> result;

    for (int r = 0; r < numRows; r++)
    {
        vector<int> row(r + 1, 1);

        for (int c = 1; c < r; c++)
        {
            row[c] = result[r - 1][c - 1] + result[r - 1][c];
        }
        result.push_back(row);
    }

    return result;
}

int main()
{
    int numRows = 5;
    vector<vector<int>> result = generate(numRows);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}