n, m = map(int, input().split())
result = 0
packmin = 1001
piecemin = 1001
for _ in range(m):
    pack, piece = map(int, input().split())
    packmin = min(packmin, pack)
    piecemin = min(piecemin, piece)

packmin = min(packmin, piecemin * 6)
result = n // 6 * packmin + min(packmin, (n % 6) * piecemin)

print(result)
