#include <bits/stdc++.h>

using namespace std;

struct Flatlander {
    int X;
    double L;
};

bool compareFlatlanders(const Flatlander &a, const Flatlander &b) {
    return a.X < b.X;
}

int main() {
    int theta, N;
    cin >> theta >> N;

    vector<Flatlander> flatlanders(N);
    for (int i = 0; i < N; ++i) {
        int X, H;
        cin >> X >> H;
        double cotTheta = 1.0 / tan(theta * (2*acos(0.0)) / 180.0);
        double L = H * cotTheta;
        flatlanders[i] = {X, L};
    }

    // Sort flatlanders by their position X
    sort(flatlanders.begin(), flatlanders.end(), compareFlatlanders);

    double totalShadowLength = 0.0;
    double currentEnd = flatlanders[0].X;

    for (const auto &flatlander : flatlanders) {
        double shadowStart = flatlander.X;
        double shadowEnd = flatlander.X + flatlander.L;

        if (shadowStart > currentEnd) {
            // No overlap, add the entire shadow length
            totalShadowLength += shadowEnd - shadowStart;
            currentEnd = shadowEnd;
        } else if (shadowEnd > currentEnd) {
            // Overlap, add only the non-overlapping part
            totalShadowLength += shadowEnd - currentEnd;
            currentEnd = shadowEnd;
        }
        // Else, the shadow is completely overlapped by the current shadow, do nothing
    }

    // Output the total shadow length with high precision
    cout << fixed << setprecision(5) << totalShadowLength << endl;

    return 0;
}