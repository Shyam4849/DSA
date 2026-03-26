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
    /*
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
    */

    // Optimal Approach

    int r = matrix.size();    // Storing the number of rows
    int c = matrix[0].size(); // Storing the number of columns

    bool rowImpacted = false;
    bool colImpacted = false;

    // Checking the row is impacted or not
    for (int col = 0; col < c; col++)
    {
        if (matrix[0][col] == 0)
        {
            rowImpacted = true;
            break;
        }
    }

    // Checking the column is impacted or not
    for (int row = 0; row < r; row++)
    {
        if (matrix[row][0] == 0)
        {
            colImpacted = true;
            break;
        }
    }

    // Setting marker of first row and column
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }

    // Corner elements
    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        {
            if (matrix[0][j] == 0 || matrix[i][0] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // Replacing the impacted row with zero
    if (rowImpacted)
    {
        for (int j = 0; j < c; j++)
        {
            matrix[0][j] = 0;
        }
    }

    // Replacing the impacted column with zero
    if (colImpacted)
    {
        for (int i = 0; i < r; i++)
        {
            matrix[i][0] = 0;
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