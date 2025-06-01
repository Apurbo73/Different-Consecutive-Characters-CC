#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        string S;
        cin >> N >> S;

        int operations = 0;

        for (int i = 1; i < N; i++)
        {
            if (S[i] == S[i - 1])
            {
                operations++;
            }
        }

        cout << operations << endl;
    }

    return 0;
}