def sum_of_odd_numbers_between_x_and_y(x, y):
    if x > y:
        x, y = y, x
    total = 0
    for num in range(x+1, y):
        if num % 2 != 0:
            total += num
    return total


T = int(input())

for _ in range(T):
    x, y = map(int, input().split())
    result = sum_of_odd_numbers_between_x_and_y(x, y)
    print(result)
