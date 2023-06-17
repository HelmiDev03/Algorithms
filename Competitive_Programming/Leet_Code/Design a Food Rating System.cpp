class FoodRatings {
public:
    //cuis -> map[rating -> set[dish]]
    map<string, map<int,set<string>>> mc;
    //dish -> pair of {rating, cuisine}
    map<string, pair<int,string>> md;
    FoodRatings(vector<string>& food, vector<string>& cuisine, vector<int>& rating) {
        for(int i=0;i<food.size();i++){                      //insert in maps
            mc[cuisine[i]][rating[i]].insert(food[i]);
            md[food[i]]={rating[i],cuisine[i]};
        }
    }
    
    void changeRating(string f, int n) {
        if(md.find(f)==md.end()) return;  // if this food don't exsist 
        auto p=md[f];
        int rate=p.first;
        string cuise=p.second;
        
        mc[cuise][rate].erase(f);    //update cuisine map
        mc[cuise][n].insert(f);
        if(mc[cuise][rate].size()==0) mc[cuise].erase(rate);   //if rate set has size zero, then remove that rating entry for that cuisine
        
        md[f].first=n;    //update food map
    }
    
    string highestRated(string c) {
        if(mc.find(c)==mc.end()) return "";   //if cuisine don't exist
        auto i = mc[c].rbegin();                // fetch last rating(highest) of that cuisne
        auto st=i->second;                    // fetch set (foods) with that rating
        return *st.begin();                      // return first food (lexo. smallest)
    }
};
