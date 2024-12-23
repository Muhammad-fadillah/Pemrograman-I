def reverse(angka):
    return int(str(angka)[::-1])  

A, B = map(int, input().split())

A_reversed = reverse(A)
B_reversed = reverse(B)
C = A_reversed + B_reversed

print(reverse(C))
