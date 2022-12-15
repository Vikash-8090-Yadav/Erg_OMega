from collections import Counter

n=int(input())
l=list(map(int,input().split()))
if n<l[0]:
    for i in range(n):
        print(0)

else:
    num_values = list(Counter(l).values())
    # print(num_values)
    for i in num_values:
        print(i)
    for j in range(n-len(num_values)):
        print(0)
# # # Your code here
# # n=int(input())
# # l=list(map(int,input().split()))
# # d ={}
# # for i in l:
# #     if i in d :
# #         d[i] = d[i]+1;
# #     else:
# #         d[i]=1;
# # for i in range(1,n+1):
# #     if i in d:
# #         pass
# #     else :
# #         d[i]=0
# # for i in range(1,n+1):
# #     print(d[i]);
#
# # Your code here
# from collections import Counter
#
# n=int(input())
# l=list(map(int,input().split()))
#
# num_values = list(Counter(l).values())
# # print(num_values)
#     for i in num_values:
#         print(i)
#     for j in range(n-len(num_values)):
#         print(0)
