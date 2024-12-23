a, b, i, j, x, y = map(float, input("Masukkan nilai a, b, i, j, x, y secara berurutan: ").split())

hasil = (((a - b) *  i) / j) - (x + y)

print(f"Hasil dari perhitungan adalah: {hasil:.3f}")