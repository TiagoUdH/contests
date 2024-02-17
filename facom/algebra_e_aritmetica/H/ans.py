N = int(input())

for i in range(N):
  s = [float(n) for n in input().split(" ")]
  
  if s[0] > s[1] and s[0] < s[2]:
    print("True")
  else:
    print("False")