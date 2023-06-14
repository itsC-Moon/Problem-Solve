from typing import List
def tribonacci(num: int) -> List[int]:
    if(num <= 3):
        return [1]*num
    trib = [1,1,1]
    x = 1
    y = 1
    z = 1
    tri = 0
    
    for n in range(num-3):
        tri = x + y + z
        tmp = y
        y = z
        z = tri
        x = tmp 
        trib.append(tri)
    return trib
print(tribonacci(4))
