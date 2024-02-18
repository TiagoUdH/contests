from itertools import combinations

def generate_combinations(elements):
    result = []
    
    for r in range(1, len(elements) + 1):
        comb = combinations(elements, r)
        
        for c in comb:
            result.append(','.join(c))
            
    return result

element_list = input().split(',')

combinations_list = generate_combinations(element_list)

for combination in combinations_list:
    print(combination)