// https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>
using namespace std;

int nearlyDigits(const string &s, int left, int right) {
    // Caso base: cuando el segmento es de un solo carácter
    if (left == right) {
        return (s[left] == '4' || s[left] == '7') ? 1 : 0;
    }

    // División del segmento en dos mitades
    int mid = (left + right) / 2;

    // Conteo en la mitad izquierda y derecha
    int leftCount = nearlyDigits(s, left, mid);
    int rightCount = nearlyDigits(s, mid + 1, right);

    // Combinación de los resultados
    return leftCount + rightCount;
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    int digits = nearlyDigits(s, 0, s.size() - 1);
    cout << (digits == 4 || digits == 7 ? "YES\n" : "NO\n");
    return 0;
}
