# -*- coding: utf-8 -*-
"""
Created on Thu Feb 25 16:02:31 2021

@author: SminYu
"""

import sys

r = 31
M = 1234567891

L = int(input())
s = input()

H = 0
for i in range(L):
   H += ((ord(s[i])-96)*(r**i)) % M
   print(H)

print(H%M)
