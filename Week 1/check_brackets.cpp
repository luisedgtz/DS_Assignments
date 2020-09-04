#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct Bracket {
    Bracket(char type, int position):
        type(type),
        position(position)
    {}

    bool Matchc(char c) {
        if (type == '[' && c == ']')
            return true;
        if (type == '{' && c == '}')
            return true;
        if (type == '(' && c == ')')
            return true;
        return false;
    }

    char type;
    int position;
};

int main(){

    string text;
    getline(cin,text);

    stack <Bracket> stack;

    for (int position = 0; position < text.length(); ++position) {
        char next = text[position];

        if (next == '(' || next == '[' || next == '{') {
            stack.push(Bracket(next,position));
        }

        if (next == ')' || next == ']' || next == '}') {
            if(stack.empty() || !(stack.top().Matchc(next))){
                stack.push(Bracket(next,position));
                break;
            }
            else{
                stack.pop();
            }
        }
    }
    if(stack.empty()){
        cout << "Success" << endl;
    }
    else{
        cout << stack.top().position + 1 << endl;
    }
    return 0;
}