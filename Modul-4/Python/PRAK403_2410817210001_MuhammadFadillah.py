a, b = map(int, input("Masukkan dua angka : ").split())

if a < b:
    for i in range(a, b + 1):
        print(f"{i} {b - (i - a)}", end=" - ")
elif a > b:
    for i in range(a, b - 1, -1):
        print(f"{i} {b + (a - i)}", end=" - ")

print("\b\b ")
