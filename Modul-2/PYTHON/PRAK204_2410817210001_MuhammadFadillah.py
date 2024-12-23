r = float(input("Masukan Jari-jari : "))
t = float(input("Masukan Tinggi : "))

volume = 3.1428571428571 * r * r * t
luas = 2 * 3.1428571428571 * r * (r + t)
keliling = 2 * 3.1428571428571 * r

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")