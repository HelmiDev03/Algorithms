def get_subarray_indices(lst):
    max_sum = 0
    current_sum = 0
    start_index = 0
    end_index = -1

    for i, num in enumerate(lst):
        if num <= 0:
            # Reset current sum and start a new subarray
            current_sum = 0
            start_index = i + 1
        else:
            current_sum += num

        if current_sum > max_sum:
            max_sum = current_sum
            end_index = i

    # Find the last index of the subarray with only positive values
    last_index = end_index
    while lst[last_index] <= 0:
        last_index -= 1

    # Find the first index of the subarray with only positive values
    first_index = last_index
    while first_index >= 0 and lst[first_index] > 0:
        first_index -= 1
    first_index += 1

    # Calculate the sum of the subarray with only positive values
    subarray_sum = sum(lst[first_index:last_index + 1])

    return (first_index, last_index, subarray_sum)
    
final=[]
n,q=list( map(int, input().split()[:2]))
tab=list( map(int, input().split()[:n]))
for i in range (q):
    nb_decrease=int(input())
    for descrease in range(nb_decrease):
        tab = tab[0:get_subarray_indices(tab)[0]] + [x-1 for x in tab[get_subarray_indices(tab)[0]:get_subarray_indices(tab)[1]+1]] + tab[get_subarray_indices(tab)[1]+1::]
    final.append(sum(tab))  
    
    

for ans in final :
    print(ans)







