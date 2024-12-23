import math

a = int(input("Masukan nilai A : "))
b = int(input("Masukan nilai B : "))

c = math.sqrt(b**2 - a**2)
keliling = a + b + c
luas = 0.5 * a * c

print(f"Alas = {c:.0f} cm")
print(f"Tinggi = {a:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")

