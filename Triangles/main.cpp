#include <fstream>
#include <vector>
#include <set>

struct point {
    int x;
    int y;

    bool operator< (const point& other) const {
        return x*y < other.x*other.y;
    }
};

bool good_triangle(point A, point B, point C) {
    long long ax = A.x-B.x, ay = A.y-B.y,
            bx = C.x-B.x, by = C.y-C.y,
            cx = A.x-C.x, cy = A.y-C.y;
    if (ax*ax == ay*ay) {
        return true;
    } else if (bx*bx == by*by) {
        return true;
    } else if (cx*cx == cy*cy) {
        return true;
    }
    return false;
}

bool great_triangle(point A, point B, point C) {
    long long ax = A.x-B.x, ay = A.y-B.y,
            bx = C.x-B.x, by = C.y-C.y,
            cx = A.x-C.x, cy = A.y-C.y;
    if (ax*ax < ay*ay) {
        return true;
    } else if (bx*bx < by*by) {
        return true;
    } else if (cx*cx < cy*cy) {
        return true;
    }
    return false;
}

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    int n;
    fin >> n;
    std::vector<point> points(n);

    for (point p: points) {
        int x, y;
        fin >> p.x >> p.y;
    }

    points.push_back(points[0]);
    points.push_back(points[1]);

    std::vector<point> tmp(n);
    bool fl = false;

    int numTriangles = 0, actSz = 0;
    for (int i = 0; i < points.size(); i++) {
        while ()
    }

    fout << numTriangles;

    return 0;
}
