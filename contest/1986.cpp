#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Function to calculate the smallest value of f(a)
int min_distance(vector<int>& points) {
    // Sort the points to find the median
    sort(points.begin(), points.end());
    
    // The median is the second element in the sorted list
    int median = points[1];
    
    // Calculate the total distance to the median
    int total_distance = abs(points[0] - median) + abs(points[1] - median) + abs(points[2] - median);
    
    return total_distance;
}

int main() {
    int t;
    cin >> t;

    vector<int> results;

    // Process each test case
    for (int i = 0; i < t; i++) {
        vector<int> points(3);
        cin >> points[0] >> points[1] >> points[2];
        
        // Get the minimum distance for the current test case
        int min_dist = min_distance(points);
        results.push_back(min_dist);
    }

    // Output results for all test cases
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
