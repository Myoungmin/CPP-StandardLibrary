#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

void FindElement(std::vector<int> v, int nElement)
{
    if (std::find(v.begin(), v.end(), nElement) == v.end()) // nElement�� �������� ���� ���
    {
        std::cout << nElement << " is not exist" << std::endl;
    }
    else    // nElement�� ������ ���
    {
        int nIndex = std::find(v.begin(), v.end(), nElement) - v.begin();
        std::cout << "index of "<< nElement << " : " << nIndex << std::endl;
    }
}

void TestVectorFind()
{
    std::vector<int> v = { 2, 1, 3, 6, 7, 9, 8 };

    FindElement(v, 3);
    FindElement(v, 10);
}