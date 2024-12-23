harga_A = 400000
harga_B = 350000
diskon_A = 0.13
diskon_B = 0.21

harga_diskonA = harga_A - (harga_A * diskon_A)
harga_diskonB = harga_B - (harga_B * diskon_B)

print(f"Harga sepatu A adalah {harga_A}")
print(f"Harga sepatu B adalah {harga_B}")
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {int(harga_diskonA)}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {int(harga_diskonB)}")

