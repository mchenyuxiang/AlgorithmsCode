#!/usr/bin/env python
# coding=utf-8

def binary_search(nums,key):
    lo = 0
    hi = len(nums)-1

    while(lo <= hi):
        mid = (lo+hi)/2
        if nums[mid] == key:
            return mid
        elif key < nums[mid]:
            hi = mid -1
        else:
            lo = mid + 1

    return -1
    

