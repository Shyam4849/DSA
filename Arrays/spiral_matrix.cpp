#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int r = matrix.size();
    int c = matrix[0].size();

    int srow = 0;
    int erow = r - 1;
    int scol = 0;
    int ecol = c - 1;

    vector<int> result;

    while (srow <= erow && scol <= ecol)
    {
        // Top
        for (int col = scol; col <= ecol; col++)
        {
            result.push_back(matrix[srow][col]);
        }

        // Right
        for (int row = srow + 1; row <= erow; row++)
        {
            result.push_back(matrix[row][ecol]);
        }

        // Bottom
        for (int col = ecol - 1; col >= scol; col--)
        {
            if (srow == erow)
                break;
            result.push_back(matrix[erow][col]);
        }

        // Left
        for (int row = erow - 1; row >= srow + 1; row--)
        {
            if (scol == ecol)
                break;
            result.push_back(matrix[row][scol]);
        }

        srow++;
        erow--;
        scol++;
        ecol--;
    }
    return result;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {11, 12, 13, 14}};
    vector<int> result = spiralOrder(matrix);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}