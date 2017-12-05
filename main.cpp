#include <iostream>
#include <cstring>

#define N 5

using namespace std;

const int n = 5;

bool isGlasn(char c);

int nGlasn(char a[]) {
    int count = 0;
    //int len = strlen(a);
    int i;
    for (i = 0; a[i]; ++i) {
       if (isGlasn(a[i])) count++;
    }
    return count;
}

bool isGlasn(char c) {
    switch (c) {
        case  'a':
        case  'e':
        case  'i':
        case  'o':
        case  'u':
        case  'y':
            return true;
        default:
            return false;
    }
}

int main() {
    char s[N][20];
    for (int i=0; i<N; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < N; ++i) {
        cout << nGlasn(s[i]) << endl;
    }
    return 0;
}