kelipatan, simbol = input("Masukkan kelipatan dan simbol : ").split()
kelipatan = int(kelipatan)

hasil = []
for i in range(1, 51):  
    if i % kelipatan == 0:  
        hasil.append(simbol)
    else:
        hasil.append(str(i))

print(" ".join(hasil))