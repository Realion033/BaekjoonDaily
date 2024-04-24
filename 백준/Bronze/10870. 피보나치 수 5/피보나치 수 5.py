inp = int(input())

def Fibo(n):
    if n <= 1:
        return n
    return Fibo(n - 1) + Fibo(n - 2)

print(Fibo(inp))