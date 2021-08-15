#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string result = "";
        int aa;
        cin >> aa;
        for (int j = 0; j < aa; j++)
        {
            char c;
            cin >> c;
            if (result == "" && c == '?')
            {
                result += ' ';
            }

            else if (result[result.size() - 1] == ' ' && c == '?')
            {
                result += ' ';
            }
            else if (c != '?' && result[result.size() - 1] == ' ')
            {
                bool isb = false;
                if (c == 'R')
                {
                    isb = true;
                }
                else
                {
                    isb = false;
                }
                for (int h = j - 1; h >= 0; h--)
                {
                    if (isb == true)
                    {
                        result[h] = 'B';
                        isb = false;
                    }
                    else
                    {
                        result[h] = 'R';
                        isb = true;
                    }
                }
                result += c;
            }
            else if (c != '?')
            {
                result += c;
            }
            else if (c == '?')
            {
                if (result[j - 1] == 'B')
                {
                    c = 'R';
                }
                else
                {
                    c = 'B';
                }
                result += c;
            }
        }
        if (result[result.size() - 1] == ' ')
        {
            bool isb = true;
            for (int i = 0; i <= result.size() - 1; i++)
            {
                if (isb == true)
                {
                    result[i] = 'B';
                    isb = false;
                }
                else
                {
                    result[i] = 'R';
                    isb = true;
                }
            }
            cout << result << endl;
        }
        else
        {
            cout << result << endl;
        }
    }
    return 0;
}