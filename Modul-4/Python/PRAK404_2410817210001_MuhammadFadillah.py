def kalkulator():
    while True:
        try:
            print("\nPilih program:")
            print("1. Penjumlahan")
            print("2. Pengurangan")
            print("3. Perkalian")
            print("4. Pembagian")
            print("5. Exit")
            pilihan = int(input("Masukkan Pilihan: "))
            if pilihan in [1, 2, 3, 4]:
                nilai_pertama = float(input("Masukkan nilai pertama: "))
                nilai_kedua = float(input("Masukkan nilai kedua: "))

                if pilihan == 1:
                    hasil = nilai_pertama + nilai_kedua
                    print(f"Hasil Penjumlahan antara {nilai_pertama:.2f} dan {nilai_kedua:.2f} adalah {hasil:.2f}")
                elif pilihan == 2:
                    hasil = nilai_pertama - nilai_kedua
                    print(f"Hasil Pengurangan antara {nilai_pertama:.2f} dan {nilai_kedua:.2f} adalah {hasil:.2f}")
                elif pilihan == 3:
                    hasil = nilai_pertama * nilai_kedua
                    print(f"Hasil Perkalian antara {nilai_pertama:.2f} dan {nilai_kedua:.2f} adalah {hasil:.2f}")
                elif pilihan == 4:
                    if nilai_kedua != 0:
                        hasil = nilai_pertama / nilai_kedua
                        print(f"Hasil Pembagian antara {nilai_pertama:.2f} dan {nilai_kedua:.2f} adalah {hasil:.2f}")
                    else:
                        print("Error: Pembagian dengan nol tidak diperbolehkan.")
            elif pilihan == 5:
                print("Terimakasih, telah menggunakan kalkulator Muhammad Fadillah.")
                break
            else:
                print("Input anda salah, silahkan coba lagi.")
        except ValueError:
            print("Input tidak valid, masukkan angka yang sesuai.")

kalkulator()
