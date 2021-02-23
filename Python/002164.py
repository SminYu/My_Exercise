"""
Created on Tue Feb 23 11:55:38 2021

@author: SminYu
"""

'''
N장의 카드가 있다. 
각각의 카드는 차례로 1부터 N까지의 번호가 붙어 있으며,
1번 카드가 제일 위에, N번 카드가 제일 아래이다.
카드가 한 장 남을 때까지 다음을 반복한다.
우선, 제일 위에 있는 카드를 바닥에 버린다. 
그 다음, 제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 옮긴다.
정수 N이 주어졌을 때, 제일 마지막에 남게 되는 카드를 구하는 프로그램을 작성하시오.
'''

from collections import deque
N = int(input())
card = deque(range(1,N+1))
while (len(card) > 1):
    card.popleft() #deque.popleft는 O(1)이나 list.pop(0)는 O(n)의 시간복잡도를 가짐
    card.append(card[0])
    card.popleft()
    
print(card[0])