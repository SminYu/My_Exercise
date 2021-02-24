# -*- coding: utf-8 -*-
"""
Created on Tue Feb 23 23:02:54 2021

@author: SminYu
"""
import sys

N, M = map(int, sys.stdin.readline().split())
never_heard = set()
never_seen  = set()
for i in range(N):
    never_heard.add(sys.stdin.readline().rstrip())
for i in range(M):
    never_seen.add(sys.stdin.readline().rstrip())

answer = sorted(list(never_heard & never_seen))
print(len(answer))
for i in answer:
    print(i)