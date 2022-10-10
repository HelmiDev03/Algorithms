def count_occurrence(list, n):
    # counter variable
    count = 0
    for i in list:
        if (i == n):
            # update counter variable
            count = count + 1
    return count

t = int(input())
while t < 1 or t > 90:
    t = int(input())
test = ["YES"] * t

nvalue = False
for i in range(t):
    n, k = map(int, input().split()[:2])
    listn = list(map(int, input().split(' ')[:n]))
    if n > 2 * k:
        test[i] = "NO"
    else:
        for s in listn:
            if count_occurrence(listn, s) > 2:
                test[i] = "NO"

for j, index in enumerate(test):
    print(f"Case #{j+1}: {index}")




