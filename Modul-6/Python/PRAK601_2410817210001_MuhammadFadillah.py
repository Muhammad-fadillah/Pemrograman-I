baris, kolom = map(int, input().split())
isi = list(map(int, input().split()))
angka = []
x = 0
for i in range(baris):
    baris = isi[x:x + kolom]
    angka.append(baris)
    x += kolom  
for baris in angka:
    print(*baris)
