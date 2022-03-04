#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>

using namespace std;

struct Segment {
    int start, end;
};

bool sort1(Segment i, Segment j) 
{
   return (i.end < j.end);
 }

vector<int> optimal_points(vector <Segment> &segments) 
{

    sort(segments.begin(), segments.end(), sort1);

    vector<int> points;
    int p = segments[0].end;
    points.push_back(p);

    for (size_t i = 1; i < segments.size(); ++i) 
    {
        if (p < segments[i].start || p > segments[i].end)
         {
            p = segments[i].end;
            points.push_back(p);
        }
    }
    return points;
}

int main() {
    int n;
    cin >> n;
    vector <Segment> segments(n);
    for (size_t i = 0; i < segments.size(); ++i) {
        cin >> segments[i].start >> segments[i].end;
    }
    vector<int> points = optimal_points(segments);
    cout << points.size() << "\n";
    for (size_t i = 0; i < points.size(); ++i) {
        cout << points[i] << " ";
    }
}