#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    map <string,int> Score ; 
    vector <pair<string ,int>>  winner_current_round ; 
    int max; 
   /*
   mike  5
   andrew 5  
   */
    
    while (n--) {
        string player;
        int player_round_score;
        cin >>player>>player_round_score ; 
        if (Score.find(player) != Score.end())
                  Score[player]+=player_round_score ; 
        else
                  Score[player]=player_round_score ; 
   
            winner_current_round.push_back({player,Score[player]});
       


      



    }
    max  = INT_MIN ;     
      for ( map <string,int> ::iterator it  = Score.begin() ; it != Score.end() ; it++){
            if (it->second > max)
                  max = it->second ;
      }  

      for ( vector <pair<string ,int>> ::iterator it  = winner_current_round.begin() ; it != winner_current_round.end() ; it++){
            if (it->second >=max && Score[it->first]==max){
                  cout << it->first <<endl ;
                  return 0;

            }
            
      } 
    return 0;
}
