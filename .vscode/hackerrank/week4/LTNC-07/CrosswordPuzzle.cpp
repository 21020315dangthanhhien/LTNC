#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'crosswordPuzzle' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY crossword
 *  2. STRING words
 */
bool checkVertical(int i,int j,string s,vector<string> cw)
{
    if((int)cw.size()-j<(int)s.size())
    return false;
    int k=0;
    while(k<(int)s.size())
    {
        if(cw[i][j]==s[k] || cw[i][j]=='-')
        {
            j++;
            k++;
        }
        else
        return false;
    }
    return true;
}
bool checkHorizontal(int i,int j,string s,vector<string> cw)
{
    if((int)cw[0].size()-i<(int)s.size())
    return false;
    int k=0;
    while(k<(int)s.size())
    {
        if(cw[i][j]==s[k] || cw[i][j]=='-')
        {
            i++;
            k++;
        }
        else
        return false;
    }
    return true;
}
vector<string> fun(int u,vector<string> &cw,vector<string> &word)
{
    if(u==word.size())
    return cw;
    string s=word[u];
    for(int i=0;i<cw.size();i++)
    {
        for(int j=0;j<cw[0].size();j++)
        {
            if(checkVertical(i,j,s,cw))
            {
                vector<string> dcw=cw;
                int k=0,y=j;
                while(k<(int)s.size())
                {
                    dcw[i][y]=s[k];
                    y++;
                    k++;
                }
                vector<string> ans=fun(u+1,dcw,word);
                if(ans.size()!=0)
                return ans;
            }
            if(checkHorizontal(i,j,s,cw))
            {
                vector<string> dcw=cw;
                int k=0,x=i;
                while(k<(int)s.size())
                {
                    dcw[x][j]=s[k];
                    x++;
                    k++;
                }
                vector<string> ans=fun(u+1,dcw,word);
                if(ans.size()!=0)
                return ans;
            }
        }
    }
    return {};
}
vector<string> crosswordPuzzle(vector<string> crossword, string words) 
{
    stringstream sin(words);
    string w;
    vector<string> v;
    while(getline(sin,w,';'))
    {
        v.push_back(w);
    }
    return fun(0,crossword,v);
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<string> crossword(10);

    for (int i = 0; i < 10; i++) {
        string crossword_item;
        getline(cin, crossword_item);

        crossword[i] = crossword_item;
    }

    string words;
    getline(cin, words);

    vector<string> result = crosswordPuzzle(crossword, words);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
