#!/usr/bin/env python
# coding=utf-8
from binary_search import *


if __name__ == "__main__":
    import sys
    if len(sys.argv) != 2:
        print "usage:demo path"
        sys.exit(-1)
   
    nums = [ ]
    for line in open(sys.argv[1]):
        line.replace('\n','')
        nums.append(int(line))

    nums.sort()
    print nums

    input_num = 0
    

