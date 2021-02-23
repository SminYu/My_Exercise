# -*- coding: utf-8 -*-
"""
Created on Tue Feb 23 11:58:38 2021

@author: SminYu
"""
'''
비어있는 공집합 S가 주어졌을 때, 아래 연산을 수행하는 프로그램을 작성하시오.
단 x는 20이하의 자연수이다.
S에 x를 추가한다, 제거한다, 있으면 1을 없으면 0을 출력한다
있으면 제거하고 없으면 추가한다, S를 {1,2,...,20}으로 바꾼다, 공집합으로 바꾼다.
'''
import sys

M = int(input())
di = {}

for i in range(20):
   di[i+1] = 0
   
for i in range(M):
    input_ = input()
    #input_ = sys.stdin.readline().rstrip()
    if (input_ == 'all'):
        di = {xx: 1 for xx in di}
    elif (input_ == 'empty'):
        di = {xx: 0 for xx in di}
    else:
        order, x = input_.split()
        x = int(x)
        if (order == 'add'):
            di[x] = 1
        elif (order == 'remove'):
            di[x] = 0
        elif (order == 'check'):
            print(di[x])
        elif (order == 'toggle'):
            if (di[x] == 1):
                di[x]=0
            else:
                di[x]=1
