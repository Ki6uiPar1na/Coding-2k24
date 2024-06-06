def max_draws(p1, p2, p3):
    S = p1 + p2 + p3
    
    # If the sum of points is odd, it's invalid
    if S % 2 != 0:
        return -1
    
    # Calculate total games played
    G = S // 2
    
    # Maximum possible draws
    max_draws_possible = S // 2 - (p3 - p2)
    
    # Points from wins should be sufficient to make p3 the highest score
    if max_draws_possible >= 0 and p3 - p2 <= max_draws_possible <= G:
        return max_draws_possible
    else:
        return -1

# Example usage:
p1 = 3
p2 = 4
p3 = 5
print(max_draws(p1, p2, p3))  # Expected output depends on the distribution of scores
