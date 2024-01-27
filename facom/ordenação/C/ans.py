n = int(input())

s = [int(i) for i in input().split(" ")]

v1 = []
v2 = []

for i in s:
  if i % 2:
    v1.append(i)
  else:
    v2.append(i)

v1.sort()
v2.sort()

v = v1 + v2

qtd = 0

for i in v:
  end = " " if qtd != len(v) - 1 else "\n"
  
  print(i, end=end)
  
  qtd += 1