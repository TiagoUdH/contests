v =[]

while True:
  try:
    s = [int(i) for i in input().split(" ")]
    
    pos = 0
    
    i = list(range(1, s[0] + 1))
    
    for it in range(s[0] - 1):
      pos += s[1]
      
      while pos > len(i):
        pos -= len(i)
        
      pos -= 1
      
      i.pop(pos)
      
    print(i[0])   
             
  except EOFError:
    break