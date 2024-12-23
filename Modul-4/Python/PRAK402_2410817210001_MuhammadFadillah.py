n = int(input("Masukkan batas maksimal: "))

ganjil = [i for i in range(1, n+1) if i % 2 != 0]
print(" ".join(map(str, ganjil)))

genap = [i for i in range(n, 1-1, -1) if i % 2 == 0]
print(" ".join(map(str, genap)))
