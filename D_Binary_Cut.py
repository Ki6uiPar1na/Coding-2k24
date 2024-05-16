def min_pieces_to_sorted(s):
    transitions = 0
    
    # Count transitions from '0' to '1' or '1' to '0'
    for i in range(1, len(s)):
        if s[i] != s[i - 1]:  # Transition detected
            transitions += 1
    
    # The minimum number of pieces needed is transitions + 1
    return transitions

for i in range(int(input())):
    s = input()
    print(min_pieces_to_sorted(s))
