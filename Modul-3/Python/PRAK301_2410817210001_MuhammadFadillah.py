angka = input("Masukkan tiga angka dipisahkan dengan spasi: ").split()

a, b, c = map(int, angka)

if a > b:
    a, b = b, a
if a > c:
    a, c = c, a
if b > c:
    b, c = c, b

print(f"Hasil pengurutan: {a} {b} {c}")