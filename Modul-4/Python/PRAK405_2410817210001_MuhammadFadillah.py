n, kelipatan = map(int, input("Masukkan jumlah baris dan kelipatan : ").split())

total = 0  

for i in range(1, n + 1):
    sum_row = 0  
    row_output = [] 
    
    for j in range(i, 0, -1):
        sum_row += j * kelipatan
        row_output.append(f"({j} * {kelipatan})")
    
    print(" + ".join(row_output), f"= {sum_row}")
    
    total += sum_row

print(total)
