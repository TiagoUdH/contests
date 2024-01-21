N = int(input())

for i in range(N):
  s = input()
  
  e = len(s) // 2
  
  begin = s[:e][::-1]
  end = s[e::][::-1]
  
  ans = begin + end
  
  print(ans)