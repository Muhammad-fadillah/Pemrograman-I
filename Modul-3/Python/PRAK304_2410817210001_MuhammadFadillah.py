angka = int(input("Masukkan angka (0-99): "))

if angka < 0 or angka >= 100:
    print("Anda Menginput Melebihi Limit Bilangan")  
elif angka == 0:
    print("Nol") 
elif angka < 10:
    print("Satuan") 
elif angka < 20:
    print("Belasan")  
else:
    print("Puluhan") 