ChasePiece = [int(1), int(1), int(2), int(2), int(2), int(8)]

num_list = list(map(int, input().split()))
result_list = [0, 0, 0, 0, 0, 0]

for i in range(len(ChasePiece)):
    if ChasePiece[i] != num_list[i]:
        result_list[i] = ChasePiece[i] - num_list[i]

for i in range(len(result_list)):
    print(result_list[i], end=" ")