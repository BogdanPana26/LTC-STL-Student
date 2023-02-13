#pragma once
#include <map>

/**
 * @todo Implement function for conversion from 100 point system to 5 point system
 *
 * @example
 * 0-29 – 1;
 * 30-49 – 2;
 * 50-69 – 3;
 * 70-89 – 4;
 * 90+ - 5
 *
 * @param markIn100Point - mark in 100 point system, could be everything.
 *
 * @return 1-5
 */
std::size_t convertMarkTo5PointSystem(std::size_t markIn100Point)
{
    if(markIn100Point > 100)
    {
        markIn100Point = 100;
    }
    std::map<std::size_t,std::size_t> MarkDict{
        {29,1},
        {49,2},
        {69,3},
        {89,4},
        {100,5}
    };

    auto val = MarkDict.lower_bound(markIn100Point);
    return MarkDict[val->first];


}
