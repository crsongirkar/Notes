// question easy but tricky

#include<bits/stdc++.h>
using namespace std;

vector<string> keyBoardRows(vector<string>& words) {


      unordered_map<char,int> map; // for eg q is 1st row and n is 3rd row  
        string rows[] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
      for (int i = 0; i < 3; ++i) {
        for (char c : rows[i]) {
            map[c] = i;
        }
    }

    vector<string>res;
    for(auto word: words){
       if (word.empty()) continue;  // if string are empty

        int row = map[tolower(word[0])]; // store the map element in row to determine 
        bool isValid = true;

        for (char c : word) {
            if (map[tolower(c)] != row) {
                isValid = false;
                break;
            }
        }

        if (isValid) {
            res.push_back(word);
        }
    }

    return res;
  
}
int main()
{
    vector<string> words = {"fall", "chinmay", "Dad", "Peace"};
    vector<string> singleRowWords = keyBoardRows(words);
    for (const string& word : singleRowWords) {
        cout << word << " ";
    }

    return 0;
}

