#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    // Brute Force
    int n = intervals.size();
    vector<vector<int>> result;
    sort(intervals.begin(), intervals.end());

    for (int i = 0; i < n; i++)
    {
        // let's say {1,3} is an interval
        int start = intervals[i][0]; // so the start is 1
        int end = intervals[i][1];   // and end is 3

        if (!result.empty() && end <= result.back()[1])
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (intervals[j][0] <= end)
            {
                end = max(intervals[j][1], end);
            }
            else
            {
                break;
            }
        }
        result.push_back({start, end});
    }
    return result;
}

int main()
{
    vector<vector<int>> intervals = {{1, 4}, {4, 5}};

    vector<vector<int>> result = merge(intervals);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << ",";
        }
        cout << " ";
    }
}