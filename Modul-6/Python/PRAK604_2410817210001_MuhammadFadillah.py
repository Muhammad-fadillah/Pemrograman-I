kalimat_asli = input()
kalimat_palsu = input()
panjang_asli = len(kalimat_asli)
panjang_palsu = len(kalimat_palsu)
jumlah_sama = 0
jumlah_beda = 0

if panjang_asli != panjang_palsu:
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for indeks in range(panjang_asli):
        char_asli = kalimat_asli[indeks]
        char_palsu = kalimat_palsu[indeks]
        if char_asli == char_palsu:
            if char_asli != ' ':
                print('*', end='')
                jumlah_sama += 1
        else:
            print('#', end='')  
            jumlah_beda += 1
    print('\n* = {}'.format(jumlah_sama))
    print('# = {}'.format(jumlah_beda))
    if jumlah_sama >= jumlah_beda:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")