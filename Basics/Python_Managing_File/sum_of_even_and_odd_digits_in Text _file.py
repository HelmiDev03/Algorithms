def display_sum_of_even_and_odd_digits(file):
    nbpair,nbimpair=0,0
    l=file.readlines()
    for j,valj in enumerate(l):
        for k,kval in enumerate(valj.strip()):
            if kval.isdigit():
                s=kval
                while ((valj.strip())[k+1].isdigit()):
                    s+=(valj.strip())[k+1]
                    k+=1    
                if not int(s) %2 :
                    nbpair+=1  
                else:
                    nbimpair+=1
    print(f"il Y'a {nbimpair} chiffre impires et {nbpair} chiffres pairs ")                    
            
file=open("a.txt","r")
display_sum_of_even_and_odd_digits(file)
