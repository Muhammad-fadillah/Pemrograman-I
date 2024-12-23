import math

alas = 5
tinggi = 12

sisi_c = math.sqrt(alas**2 + tinggi**2)

keliling = alas + tinggi + sisi_c

luas = (alas * tinggi) / 2

print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")

print("\nJawab:")
print(f"Sisi A = {alas} cm")
print(f"Sisi B = {tinggi} cm")
print(f"Sisi C = {int(sisi_c)} cm")
print(f"Keliling = {int(keliling)} cm")
print(f"Luas = {int(luas)} cm")