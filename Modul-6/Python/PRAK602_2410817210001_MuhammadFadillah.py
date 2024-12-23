n = int(input())
zetsu_awal = list(map(int, input().split()))
zetsu_akhir = [zetsu_awal[i] * (i + 1) for i in range(n)]
print(" ".join(map(str, zetsu_akhir)))
