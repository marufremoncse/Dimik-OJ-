#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    map<char,int>my_map;

    my_map['a'] = 1;
    my_map['A'] = 1;
    my_map['b'] = 2;
    my_map['B'] = 2;
    my_map['c'] = 3;
    my_map['C'] = 3;
    my_map['d'] = 4;
    my_map['D'] = 4;
    my_map['e'] = 5;
    my_map['E'] = 5;
    my_map['f'] = 6;
    my_map['F'] = 6;
    my_map['g'] = 7;
    my_map['G'] = 7;
    my_map['h'] = 8;
    my_map['H'] = 8;
    my_map['i'] = 9;
    my_map['I'] = 9;
    my_map['j'] = 10;
    my_map['J'] = 10;
    my_map['k'] = 11;
    my_map['K'] = 11;
    my_map['l'] = 12;
    my_map['L'] = 12;
    my_map['m'] = 13;
    my_map['M'] = 13;
    my_map['n'] = 14;
    my_map['N'] = 14;
    my_map['o'] = 15;
    my_map['O'] = 15;
    my_map['p'] = 16;
    my_map['P'] = 16;
    my_map['q'] = 17;
    my_map['Q'] = 17;
    my_map['r'] = 18;
    my_map['R'] = 18;
    my_map['s'] = 19;
    my_map['S'] = 19;
    my_map['t'] = 20;
    my_map['T'] = 20;
    my_map['u'] = 21;
    my_map['U'] = 21;
    my_map['v'] = 22;
    my_map['V'] = 22;
    my_map['w'] = 23;
    my_map['W'] = 23;
    my_map['x'] = 24;
    my_map['X'] = 24;
    my_map['y'] = 25;
    my_map['Y'] = 25;
    my_map['z'] = 26;
    my_map['Z'] = 26;

    for(int i=0;i<n;i++){
        string input;
        cin>>input;
        for(int i=0;i<input.length();i++){
            cout<<my_map[input[i]];
        }
        cout<<endl;
    }
}
