def make_sequence(n, x):
    count = {}

    for i in x:
        if i in count:
            count[i] += 1
        else:
            count[i] = 1


def min_removal_to_make_good_sequence(N, a):
    element_count = {}

    for x in a:
        if x in element_count:
            element_count[x] += 1
        else:
            element_count[x] = 1

    removals = 0

    for x in element_count:
        if element_count[x] > x:
            removals += element_count[x] - x
        elif element_count[x] < x:
            removals += element_count[x]

    return removals


# Input
N = int(input())
a = list(map(int, input().split()))

# Calculate and print the result
result = min_removal_to_make_good_sequence(N, a)
print(result)
