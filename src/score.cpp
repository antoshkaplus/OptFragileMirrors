//
//  score.cpp
//  FragileMirrors
//
//  Created by Anton Logunov on 6/9/15.
//
//

#include <array>

#include "score.hpp"

using namespace std;

// from 50 to 100
const array<double, 51> EMPTY_LINES_PARAM = { {
    6.396, // 50
    9.9972,
    8.33269,
    10.4997,
    7.4959,
    7.9984,
    7.9984,
    11.333,
    7.9984,
    11.9981,
    7.9984, // 60
    9.9972,
    11.9981,
    13.3318,
    10.6623,
    7.33329,
    10.9966,
    14.9963,
    9.5003,
    15.9957,
    6.33389, // 70
    10.6623,
    9.9972,
    12.4985,
    7.4959,
    10.9966,
    8.66351,
    10.4997,
    8.5009,
    9.5003,
    7.66411, // 80
    15.4988,
    10.6623,
    11.9981,
    9.9972,
    14.4994,
    11.4956,
    10.3315,
    10.6623,
    12.4985,
    13.5, // 90
    10.6623,
    12.4985,
    13.3318,
    8.24685,
    9.9972,
    12.3324,
    10.6623,
    6.4965,
    11.4956,
    11.2506 // 100
} };
