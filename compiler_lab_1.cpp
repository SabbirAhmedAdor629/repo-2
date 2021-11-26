 #include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s,'^');
    cout << endl;

    for (int i=0; i<s.length(); i++){
        if (s[i]== 'm' && s[i+1]== 'a' && s[i+2] == 'x'){
            s[i]='5';
            cout << s[i];
            i=i+2;
            continue;
        }
        cout << s[i];
    }
}
