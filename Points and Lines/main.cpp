#include <fstream>
#include <vector>
#include <algorithm>

struct point {
    int coord;
    int type;
    int idx;

    bool operator< (const point &other) {
        if (coord == other.coord) {
            return type < other.type;
        }
        return coord < other.coord;
    }
};

enum PointType {
    SegmentStart = 0,
    OffSegment = 1,
    SegmentEnd = 2
};

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    int n, m;
    fin >> n >> m;
    std::vector<point> points;

    for (int i = 0; i < n; i++) {
        int start, end;
        fin >> start >> end;
        if (start > end)
            std::swap(start, end);
        points.push_back({start, SegmentStart, -1});
        points.push_back({end, SegmentEnd, -1});
    }

    for (int i = 0; i < m; i++) {
        int x;
        fin >> x;
        points.push_back({x, OffSegment, i});
    }

    std::sort(points.begin(), points.end());

    int numPoints = 0;
    std::vector<int> lines(m);
    for (const auto& [coordinate, type, idx] : points) {
        if (type == OffSegment) {
            lines[idx] = numPoints;
        } else if (type == SegmentStart) {
            numPoints++;
        } else if (type == SegmentEnd) {
            numPoints--;
        }
    }

    for (auto p: lines) {
        fout << p << ' ';
    }
    fout << std::endl;
    return 0;
}
