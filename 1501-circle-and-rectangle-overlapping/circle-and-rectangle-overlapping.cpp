#include <algorithm>

class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int px = clamp(xCenter, x1, x2);
        int py = clamp(yCenter, y1, y2);
        int dx = xCenter - px;
        int dy = yCenter - py;
        return dx * dx + dy * dy <=  radius * radius;
    }
};