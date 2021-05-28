#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix) {
    vector<int> answer;
    int m = matrix.size();
    int n = matrix.at(0).size();
    int sr = 0, er = m -1, sc = 0, ec = n - 1;  // Start row, end row, start column, and end column indices
    int count = 0;

    // Check if matrix is empty
    if (m == 0)
        return answer;
    if (n == 0)
        return answer;

    while (sr <= er && sc <= ec) {
        // Print sr
        for (int i = sc; i <= ec; i++) {
            answer.push_back(matrix.at(sr).at(i));
            count++;
        }
        sr++;

        if (count == m * n)
            return answer;

        // Print ec
        for (int i = sr; i <= er; i++) {
            answer.push_back(matrix.at(i).at(ec));
            count++;
        }
        ec--;

        if (count == m * n)
            return answer;

        // Print er
        for (int i = ec; i >= sc; i--) {
            answer.push_back(matrix.at(er).at(i));
            count++;
        }
        er--;

        if (count == m * n)
            return answer;

        // Print sc
        for (int i = er; i >= sr; i--) {
            answer.push_back(matrix.at(i).at(sc));
            count++;
        }
        sc++;

        if (count == m * n)
            return answer;
    }

    return answer;
}

int main() {
    vector<vector<int>> m;
    vector<int> n;

    n.push_back(1);
    n.push_back(2);
    n.push_back(3);
    n.push_back(4);
    m.push_back(n);
    n.clear();

    n.push_back(5);
    n.push_back(6);
    n.push_back(7);
    n.push_back(8);
    m.push_back(n);
    n.clear();

    n.push_back(9);
    n.push_back(10);
    n.push_back(11);
    n.push_back(12);
    m.push_back(n);
    n.clear();

    n.push_back(13);
    n.push_back(14);
    n.push_back(15);
    n.push_back(16);
    m.push_back(n);
    n.clear();

    vector<int> answer = spiralOrder(m);
    for (int i = 0; i < answer.size(); i++)
        cout << answer.at(i) << " ";
    cout << endl;

    return 0;
}
