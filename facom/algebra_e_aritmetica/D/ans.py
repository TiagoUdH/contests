N = int(input())

ans = 0

if N == int(str(N)[::-1]):
  print(N)
  
else: 
  for i in range(4):
    cap = int(str(N)[::-1])
    N += cap
    
    if N == int(str(N)[::-1]):
      ans = N
      break

  print(ans)  
  