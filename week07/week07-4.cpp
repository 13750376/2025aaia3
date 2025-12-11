// week07-4.cpp學習計畫
// 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions + instructions + instructions;
        cout << instructions;
        int x = 0, y = 0;
        int d = 0;
        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};
        for (char c : instructions) {
            if (c == 'G') {
                x += dx[d];
                y += dy[d];
            } else if (c == 'R') {
                d = (d + 1) % 4;
            } else if (c == 'L') {
                d = (d + 3) % 4;
            }
        }
        cout << 'x' << x << 'y' << y << endl;
        if (x == 0 & y == 0)
            return true;
        else
            return false;
    }
};