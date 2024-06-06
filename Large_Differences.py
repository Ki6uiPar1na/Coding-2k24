def solve():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        v = list(map(int, input().split()))

        # Calculate the sum of adjacent differences without any operation
        sum_diff = sum(abs(v[i] - v[i + 1]) for i in range(n - 1))

        # Try performing the operation for each element
        max_diff = max(abs(1 - x) for x in v)
        max_diff = max(max_diff, max(abs(k - x) for x in v))

        # Try performing the operation for each pair of adjacent elements
        for i in range(n - 1):
            for x in range(1, k + 1):
                max_diff = max(max_diff, abs(x - v[i]) + abs(x - v[i + 1]))

        # Output the maximum possible value of the sum of adjacent differences
        print(sum_diff + max_diff)

solve()
