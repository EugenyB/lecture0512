#include <iostream>
#include <cstring>
#include <set>
#include <cstdio>

#define N 5

using namespace std;

const int n = 5;

set<char> glasn = {'a','e','i','o','u','y'};

char dw[][7] = {"sun", "mon", "tue", "wed", "thu", "fri", "sat"};

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
//    switch (c) {
//        case  'a':
//        case  'e':
//        case  'i':
//        case  'o':
//        case  'u':
//        case  'y':
//            return true;
//        default:
//            return false;
//    }
    return glasn.find(c) != glasn.end();
}

int days(int d, int m, int y) {
    int dm[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int result = 365*(y-1);
    result += (y-1)/4;
    result -= (y-1)/100;
    result += (y-1)/400;
    for (int i = 0; i < m; ++i) {
        result += dm[i];
    }
    if (y%4==0 && y%100!=0 || y%400==0) {
        if (m>2) result++;
    }
    result+=d;
    return result;
}

int dayOfWeek(int d, int m, int y) {
    return days(d,m,y)%7;
}

int main() {
//    char s[N][20];
//    for (auto &i : s) {
//        cin >> i;
//    }
//
//    for (int i = 0; i < N; ++i) {
//        cout << nGlasn(s[i]) << endl;
//    }
    int d1,m1,y1,d2,m2,y2;
    scanf("%d.%d.%d", &d1, &m1, &y1);
//    cin >> d1 >> m1 >> y1;
//    cin >> d2 >> m2 >> y2;
//    int nD1 = days(d1,m1,y1);
//    int nD2 = days(d2,m2,y2);
    cout << dw[dayOfWeek(d1,m1,y1)];
    return 0;
}