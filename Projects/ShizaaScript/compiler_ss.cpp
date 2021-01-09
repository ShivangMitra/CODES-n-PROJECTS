#include <fstream>
#include <iostream>
#include<string>

//Expression evaluation
#include "stringEval.cpp"

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //for decoding code line by line
    string code_line;

    //Temporary console code input
    // ofstream fout;
    // fout.open("test.txt");
    // while(fout){
    //     getline(cin, code_line);
    //     if(code_line == "-1")
    //     break;
    //     fout << code_line << "\n";
    // }
    // fout.close();

    //Compiler starts here
    ifstream fin;
    fin.open("test.txt");
    while (fin)
    {
        getline(fin, code_line);
        bool keyword_check = true;
        int quote_num = 1;
        bool colon_check = false;
        string temp = "";
        string to_print = "";
        string evalExp = "";
        float evaluated;
        for (auto c : code_line)
        {
            if (code_line[code_line.length() - 1] != ';')
            {
                cout << "Syntax Error: ';' expected you rart";
                return 0;
            }
            if (temp.compare("chipkao") == 0)
            {
                if (keyword_check)
                {
                    keyword_check = false;
                    continue;
                }
                if (c == ':')
                {
                    if (colon_check == true)
                    {
                        cout << "Syntax Error: ':' expected";
                        return 0;
                    }
                    colon_check = true;
                    continue;
                }
                else if (c == '"' && colon_check == false)
                {
                    cout << "Syntax Error: ':' not found";
                    return 0;
                }
                else if (c == '"' && quote_num == 1 && colon_check == true)
                {
                    quote_num++;
                    continue;
                }
                else if (c != '"' && quote_num == 2)
                {
                    to_print += c;
                }
                else if (c == '"' && quote_num == 2)
                {
                    cout << to_print;
                    quote_num = 1;
                    to_print = "";
                    continue;
                }
                else if (c == '+' && quote_num == 1)
                {
                    //plus code here
                }
                else if(c >=40 && c<=57 && c!=44 && quote_num == 1)
                {
                    // expressionToParse += c;
                    if(c == '+')
                    evalExp += "+";
                    else
                    evalExp += c;
                }
                else if(c == ';')
                {
                    cout << evalExp;
                    // evaluated = expression();
                    // cout << evaluated;
                }
            }
            else
            {
                temp += c;
            }
        }
        if(quote_num == 2)
        {
            cout << "Syntax Error: \" expected";
        }
    }
    fin.close();
    return 0;
}