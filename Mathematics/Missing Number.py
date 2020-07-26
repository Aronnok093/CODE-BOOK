n = int(input())
line = [int(x) for x in input().split()]
pattern = [i for i in range (1,n+1)]
print(list(set(pattern) ^ set(line))[0])
