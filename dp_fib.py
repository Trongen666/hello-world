a= int(input())
print('Fibonacci sequence')
dp=[]
for i in range (n):
    dp[n+2]=dp[n+1]+dp[n]

print( dp[n+2])
