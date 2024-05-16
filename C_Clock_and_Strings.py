def strings_intersect(a, b, c, d):
    # Determine the range for each string
    red_start = min(a, b)
    red_end = max(a, b)
    blue_start = min(c, d)
    blue_end = max(c, d)
    
    # Check if the strings do not intersect
    if red_end < blue_start or blue_end < red_start:
        return False
    
    return True

# Example usage
a = 3
b = 8
c = 9
d = 1
print(strings_intersect(a, b, c, d))  # Output: True
