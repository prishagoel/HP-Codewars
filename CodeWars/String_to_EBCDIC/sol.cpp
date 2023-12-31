#include <bits/stdc++.h>
using namespace std;

map<char, string> code = {
   {'a',"81"}, {'b',"82"}, {'c',"83"}, {'d',"84"}, {'e',"85"}, {'f',"86"},
   {'g',"87"}, {'h',"88"}, {'i',"89"}, {'j',"91"}, {'k',"92"}, {'l',"93"},
   {'m',"94"}, {'n',"95"}, {'o',"96"}, {'p',"97"}, {'q',"98"}, {'r',"99"},
   {'s',"A2"}, {'t',"A3"}, {'u',"A4"}, {'v',"A5"}, {'w',"A6"}, {'x',"A7"},
   {'y',"A8"}, {'z',"A9"}, {'A',"C1"}, {'B',"C2"}, {'C',"C3"}, {'D',"C4"},
   {'E',"C5"}, {'F',"C6"}, {'G',"C7"}, {'H',"C8"}, {'I',"C9"}, {'J',"D1"},
   {'K',"D2"}, {'L',"D3"}, {'M',"D4"}, {'N',"D5"}, {'O',"D6"}, {'P',"D7"},
   {'Q',"D8"}, {'R',"D9"}, {'S',"E2"}, {'T',"E3"}, {'U',"E4"}, {'V',"E5"},
   {'W',"E6"}, {'X',"E7"}, {'Y',"E8"}, {'Z',"E9"}, {' ',"40"}, {'.',"4B"},
   {',',"6B"}, {'!',"5A"}
};

int main(){
   string s;
   getline(cin, s);
   for (char i : s) {
      cout << code[i] << ' ';
   }
   return 0;
}