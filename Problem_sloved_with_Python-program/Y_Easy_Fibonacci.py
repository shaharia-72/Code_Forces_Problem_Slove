def generate_fibonacci_sequence(N):
    fibonacci_sequence = []
    a, b = 0, 1
    for i in range(N):
        fibonacci_sequence.append(a)
        a, b = b, a + b
    return fibonacci_sequence


N = int(input())


result = generate_fibonacci_sequence(N)
print(*result)
