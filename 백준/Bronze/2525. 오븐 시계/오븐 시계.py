a, b = input().split()
c = input()

hour = int(a)
min = int(b)
plusTime = int(c)

answer = min + plusTime
if(answer > 59):
    hour += answer // 60
    answer = answer % 60
    if(hour > 23):
        hour = hour % 24

print(hour, answer)
