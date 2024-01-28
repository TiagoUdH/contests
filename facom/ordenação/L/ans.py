class No:
    def __init__(self, valor):
        self.valor = valor
        self.esquerda = None
        self.direita = None

def inserir_no(raiz, valor):
    if raiz is None:
        return No(valor)
    else:
        if valor < raiz.valor:
            raiz.esquerda = inserir_no(raiz.esquerda, valor)
        else:
            raiz.direita = inserir_no(raiz.direita, valor)
    return raiz

in_o = []

def travessia_in_ordem(no):
    if no is not None:
        travessia_in_ordem(no.esquerda)
        in_o.append(no.valor)
        travessia_in_ordem(no.direita)

pre_o = []

def travessia_pre_ordem(no):
    if no is not None:
        pre_o.append(no.valor)
        travessia_pre_ordem(no.esquerda)
        travessia_pre_ordem(no.direita)

pos_o = []

def travessia_pos_ordem(no):
    if no is not None:
        travessia_pos_ordem(no.esquerda)
        travessia_pos_ordem(no.direita)
        pos_o.append(no.valor)

root = None

values = [int(i) for i in input().split()]

l = len(values)
qtd = 0

for value in values:
  root = inserir_no(root, value)
    
travessia_in_ordem(root)
travessia_pre_ordem(root)
travessia_pos_ordem(root)


while qtd < l:
  end = "\n" if qtd == l - 1 else " "
  
  print(pre_o[qtd], end=end)
  
  qtd += 1
  
qtd = 0

while qtd < l:
  end = "\n" if qtd == l - 1 else " "
  
  print(in_o[qtd], end=end)
  
  qtd += 1
  
qtd = 0

while qtd < l:
  end = "\n" if qtd == l - 1 else " "
  
  print(pos_o[qtd], end=end)
  
  qtd += 1