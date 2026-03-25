#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    // Brute Force
    /*
    int r = matrix.size();    // storing the number of rows
    int c = matrix[0].size(); // storing the number of columns

    vector<pair<int, int>> zeroPos;

    // Store all the positions of Zeroes
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j] == 0)
            {
                zeroPos.push_back({i, j});
            }
        }
    }

    // Replacing the row element and column element with zero
    for (auto x : zeroPos)
    {
        int row = x.first;
        int col = x.second;

        // Replacing the rows with zero
        for (int j = 0; j < c; j++)
        {
            matrix[row][j] = 0;
        }
        // Replacing the columns with zero
        for (int i = 0; i < r; i++)
        {
            matrix[i][col] = 0;
        }
    }

    // Printing the matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    */

    // Better Approach

    int r = matrix.size();    // storing the number of rows
    int c = matrix[0].size(); // storing the number of columns
    vector<bool> row(r, false);
    vector<bool> col(c, false);

    // Getting the index of the zero
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    // Replacing the elements in the row and column with zero
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (row[i] == true || col[j] == true)
                matrix[i][j] = 0;
        }
    }

    // Printing the matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    setZeroes(matrix);
}