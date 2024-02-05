N = int(input())

for i in range(N):
  s = input()
  
  ans = 0  
  m = 1
  
  for c in range(len(s) - 1, -1, -1):
    if s[c] == "1":
      ans += m
    
    m *= 2
    
  print(ans)