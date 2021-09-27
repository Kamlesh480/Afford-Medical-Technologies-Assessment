#include <bits/stdc++.h>
using namespace std;


string com(string str)
{
    int n = str.length();
    string s =  "";
    for (int i = 0; i < n; i++) {
        int len = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            len++;
            i++;
        }
        s.append(str[i]);
        s.append(to_string(len));
    }
    return s;
}

string dcmp(string str){
    string s = "";
    for(for i to str.size()){
        if(std::isdigit(str[i]) == 1 || std::isdigit(str[i]) == 2 || std::isdigit(str[i]) == 3 || std::isdigit(str[i]) == 4 ||std::isdigit(str[i]) == 5 ||std::isdigit(str[i]) == 6 ||std::isdigit(str[i]) == 7 || std::isdigit(str[i]) == 8 || std::isdigit(str[i]) == 9){
            for(int i to stoi(str[i])){
                s.append(str[i-1]);
            }

        }
    }
    return s;
}



int main()
{
    string str = "kkvvvs";
    string com_str = com(str);
    string str2 = "k2v3s1"
    string dec_str = dcmp(str2);
    return 0;
}
