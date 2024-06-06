def max_spell_st(N, spells):
    mx = 0
    
    for i in range(N):
        for j in range(i+1, N):
            st = spells[i][1] * spells[j][0] + spells[i][0] * spells[j][1]
            mx = max(mx, st)
    
    return mx

for _ in range(int(input())):
    n = int(input())
    
    spel = []
    
    for _ in range(n):
        a, b = map(int, input().split())
        spel.append((a, b))
    
    print(max_spell_st(n, spel))
