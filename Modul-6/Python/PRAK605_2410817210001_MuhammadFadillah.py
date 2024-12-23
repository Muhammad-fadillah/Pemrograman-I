r = int(input())
print('Matriks A')
MatriksA = [list(map(int, input().split())) for _ in range(r)]
print('Matriks B')
MatriksB = [list(map(int, input().split())) for _ in range(r)]
print('Matriks AXB')
MatriksAXB = [[sum(MatriksA[i][k] * MatriksB[k][j] for k in range(r)) for j in range(r)] for i in range(r)]
for baris in MatriksAXB:
    print(*baris)