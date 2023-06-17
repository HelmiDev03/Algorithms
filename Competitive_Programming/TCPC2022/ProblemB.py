final=[]
nb_customers=int(input())
time_ith_client=list( map(int, input().split()[:nb_customers]))
nb_queries=int(input())
for tour in range (nb_queries):
    data=list( map(int, input().split()[:3]))
    first_choise=max(data[0] , sum(time_ith_client) )

    second_choise=data[1] + sum(time_ith_client[0:data[2]])
    final.append(min(first_choise,second_choise))
for index in final:
    print(index) 