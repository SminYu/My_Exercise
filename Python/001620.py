# -*- coding: utf-8 -*-
"""
Created on Tue Feb 23 15:30:13 2021

@author: SminYu
"""

'''
N개의 줄에 번호가 1번부터 N번까지 포켓몬의 이름이 주어지고
M개의 문제가 주어진다.
문제에서는 번호 또는 이름이 제시되고, 이름이 제시되면 번호를, 번호가 제시되면
이름을 답해야한다.
'''

N, M = map(int, input().split())
#N, M = map(int, sys.stdin.readline().split())
di  = {}
di2 = {}

for i in range(N):
    name = input() #sys.stdin.readline().rstrip()
    di[i+1] = name
    di2[name] = i+1

for i in range(M):
    val = input() #sys.stdin.readline().rstrip()
    try:
        print(di[int(val)])
    except:
        print(di2[val])