// July 7, 2025


/*

#include <string>
#include <iostream>

using namespace std;

bool checkWin(int a_score, int b_score, bool winByTwo) {

    if (!winByTwo) {
        if (a_score >= 11) {
            cout << "A" << endl;
            return true;
        }
        if (b_score >= 11) {
            cout << "B" << endl;
            return true;
        }
    } else {
        if (a_score >= b_score + 2) {
            cout << "A" << endl;
            return true;
        }
        if (b_score >= a_score + 2) {
            cout << "B" << endl;
            return true;
        }
    }
    return false;
}

int main()
{
    string input;
    cin >> input;
    
    
    int a_score = 0;
    int b_score = 0;
    
    bool winByTwo = false;
    for (int i=0; i<input.size(); i+=2)
    {   
        char player = input[i];
        int points = input[i+1] - '0';

        if (player == 'A') {
            a_score += points;
        }
        if (player == 'B') {
            b_score += points;
        }
    
        if (a_score == 10 && b_score == 10)
        {
            winByTwo = true;
        }
        if (checkWin(a_score, b_score, winByTwo))
        {
            break;
        }

    
    }
    return 0;
}
*/


#include <string>
#include <iostream>

using namespace std;



int main()
{
    string input;
    cin >> input;
    
    cout << input.substr(input.length()-2, 1) << endl;
    return 0;
}