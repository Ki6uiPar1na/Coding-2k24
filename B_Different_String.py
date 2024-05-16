def rearrange_string(s):
    # If all characters are the same, it's impossible to create a new arrangement
    if len(set(s)) == 1:
        return "impossible"
    
    # Convert string to a list to manipulate it
    s_list = list(s)
    # Sort the list to create a new arrangement
    s_sorted = sorted(s_list)
    
    # Join the sorted list into a new string
    r = "".join(s_sorted)
    
    # If the sorted string is the same as the original, try another arrangement
    if r == s:
        # Swap the last two characters to create a new arrangement
        r_list = list(r)
        r_list[-1], r_list[-2] = r_list[-2], r_list[-1]
        r = "".join(r_list)
    
    return r

# Example usage
s = "abbc"
r = rearrange_string(s)
print(f"Original: {s}, Rearranged: {r}")
