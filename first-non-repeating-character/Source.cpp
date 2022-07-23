#include <unordered_map>
#include <iostream>

using namespace std;

int firstNonRepeatingCharacter(string string);

int main()
{
    int result  = firstNonRepeatingCharacter("abcdcaf");
    cout << result << " ";
    return 0;
}
int firstNonRepeatingCharacter(string string) {
    // Write your code here.

    unordered_map<char, int> hold;

    if (string.empty())return -1;

    for (char letter : string)
    {
        if (hold.find(letter) == hold.end())
            hold[letter] = 0;
        hold[letter]++;
    }

    for (int i = 0; i < string.size(); i++)
    {
        char letter = string[i];

        if (hold[letter] == 1)
            return i;
    }
    return -1;
}
