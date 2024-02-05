N = int(input())

for i in range(N):
  s = [int(n) for n in input().split(" ")]
  
  m = s[1]
  ans = 1
  
  while s[0] > m:
    m += s[1] + ans * s[2]
    
    ans += 1
    
  print(ans)