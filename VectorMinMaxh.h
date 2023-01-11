#pragma once

#include <iostream>
#include <vector>
#include <algorithm>


void Test_min_element_max_element_Value()
{
    std::vector<int> v = { 2, 1, 3, 6, 7, 9, 8 };

    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());

    std::cout << "min: " << min << ", " << "max: " << max << std::endl;        // 1, 9
}

void Test_min_element_max_element_Index()
{
    std::vector<int> v = { 2, 1, 3, 6, 7, 9, 8 };
    
    int min_index = min_element(v.begin(), v.end()) - v.begin();
    int max_index = max_element(v.begin(), v.end()) - v.begin();

    std::cout << "min_index: " << min_index << ", " << "max_index: " << max_index << std::endl;        // 1, 5
}

void Test_minmax_element_Value()
{
    std::vector<int> v = { 2, 1, 3, 6, 7, 9, 8 };

    auto it = std::minmax_element(v.begin(), v.end());
    int min = *it.first;
    int max = *it.second;

    std::cout << "min: " << min << ", " << "max: " << max << std::endl;        // 1, 9
}

void Test_minmax_element_Index()
{
    std::vector<int> v = { 2, 1, 3, 6, 7, 9, 8 };

    auto it = std::minmax_element(v.begin(), v.end());
    int min_index = std::distance(v.begin(), it.first);
    int max_index = std::distance(v.begin(), it.second);

    std::cout << "min_index: " << min_index << ", " << "max_index: " << max_index << std::endl;        // 1, 5
}

void TestVectorMinMax()
{
    Test_min_element_max_element_Value();
    Test_min_element_max_element_Index();
    Test_minmax_element_Value();
    Test_minmax_element_Index();
}