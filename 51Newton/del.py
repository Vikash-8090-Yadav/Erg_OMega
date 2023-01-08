# Sample Input: [2, 4, 6]
S = [2, 4, 6]

# Initialize the prefix sum array
prefix_sum = [0] * len(S)

# Calculate the prefix sum
prefix_sum[0] = S[0]
for i in range(1, len(S)):
    prefix_sum[i] = prefix_sum[i - 1] + S[i]

# Calculate the sum of each subarray and print it
for i in range(len(S)):
    # Calculate the sum of the subarray S[0] to S[i]
    sum = prefix_sum[i]
    # Find the maximum value in the subarray S[0] to S[i]
    max_value = max(S[:i + 1])
    # Add the maximum value to each element in the subarray S[0] to S[i]
    for j in range(i + 1):
        S[j] += max_value
    # Calculate the sum of the modified subarray and print it
    print(sum(S[:i + 1]))
