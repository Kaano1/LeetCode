class Solution {
public:
    string interpret(string command) {
        int i;
        string result = "";

        i = -1;
        while (command[++i])
        {
            if (command[i] == 'G')
                result += "G";
            else if (command[i] == '(' && command[i + 1] == ')')
                result += "o";
            else if (command[i] == 'a' && command[i + 1] == 'l')
                result += "al";
        }
        return (result);
    }
};
