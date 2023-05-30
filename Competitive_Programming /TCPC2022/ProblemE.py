t=int(input())
final=[]
for tour in range (t):
    nb_player=int(input())
    list_of_suspects_of_each_player=[]
    for index in range( nb_player):
        input_line = input()
        l = list(map(int, input_line.split()))
        lene = l[0]
        suspect_inputs = l[1:]
        list_of_suspects_of_each_player.append(suspect_inputs)
    count=[0]*nb_player
    for num_player in range(1,nb_player + 1) :
        for index in list_of_suspects_of_each_player:
            for value in index :
                if num_player == value:
                    count[num_player - 1 ] +=1
    temp=[]
    for i,j in enumerate (count):
        if (j / nb_player) > 0.5 :
            temp.append(i+1)
    final.append((len(temp) , temp) )
for tuple_element in final:
    integer_value, inner_list = tuple_element
    print(integer_value)
    print(*inner_list, sep=' ')