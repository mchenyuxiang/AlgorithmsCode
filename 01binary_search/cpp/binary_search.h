/*************************************************************************
	> File Name: binary_search.h
	> Author:zhaoyihong 
	> Mail:zhaoyihong_at_126_dot_com 
	> Created Time: 2015年03月13日 星期五 20时48分33秒
 ************************************************************************/

#ifndef _BINARY_SEARCH_H
#define _BINARY_SEARCH_H

#include  <vector>

namespace alg
{
    template <typename T>
    int mybinary_search(T key,std::vector<T>& a)
    {
        if(a.size() == 0)
        {
            return -1;
        }

        int lo = 0;
        int hi = a.size() -1;
        while(lo <= hi)
        {
            int mid = (lo+hi)/2;
            if(a[mid] == key)
            {
                return mid;
            }
            else if(key < a[mid])
            {
                hi = mid-1;   
            }
            else 
            {
                lo = mid+1;
            }
        }

        return -1;
    }
}

#endif
