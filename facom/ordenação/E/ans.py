v =[]

while True:
  try:
    s = input()
    
    aux = s.split()
    
    d = {
      "time": aux[0] + " " + aux[1],
      "log": s
    }
    
    v.append(d)
       
  except EOFError:
    break
  
ans = sorted(v, key=lambda time: time["time"])

for a in ans:
  print(a["log"])