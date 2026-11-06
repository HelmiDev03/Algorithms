#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007LL;


long long modpow(long long a,long long e){
    long long r=1;
    a%=MOD;
    while(e){
        if(e&1) r=r*a%MOD;
        a=a*a%MOD;
        e>>=1;
    }
    return r;
}


long long invll(long long x){ return modpow(x,MOD-2); }


void factor(unsigned long long B, vector<pair<unsigned long long,int>> &factors){
    for(unsigned long long i=2;i*i<=B;i++){
        if(B%i==0){
            int cnt=0;
            while(B%i==0){ B/=i; cnt++; }
            factors.push_back({i,cnt});
        }
    }
    if(B>1) factors.push_back({B,1});
}


long long comb(unsigned long long N,int s, const vector<long long> &inv){
    long long res=1;
    for(int j=1;j<=s;j++){
        res=res*((N-1+j)%MOD)%MOD;
        res=res*inv[j]%MOD;
    }
    return res;
}

long long dfs_count(int idx, const vector<pair<unsigned long long,int>> &factors,
                    vector<int> &exponents, unsigned long long N, unsigned long long A,
                    const vector<long long> &inv, unsigned long long cur_prod)
{
    if(idx==(int)factors.size()){
        if(cur_prod>A) return 0;
        long long total=1;
        for(int i=0;i<(int)factors.size();i++){
            int s=exponents[i], e=factors[i].second;
            total=total*comb(N,s,inv)%MOD*comb(N,e-s,inv)%MOD;
        }
        return total;
    }
    long long ans=0;
    unsigned long long p=factors[idx].first;
    int e=factors[idx].second;
    unsigned long long val=cur_prod;
    for(int s=0;s<=e;s++){
        exponents[idx]=s;
        ans=(ans+dfs_count(idx+1,factors,exponents,N,A,inv,val))%MOD;
        if(s<e){
            if(val>ULLONG_MAX/p) break; 
            val*=p;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int T; cin>>T;
    for(int tc=1;tc<=T;tc++){
        unsigned long long N,A,B; cin>>N>>A>>B;
        vector<pair<unsigned long long,int>> factors;
        factor(B,factors);
        int maxe=0;
        for(auto &f:factors) maxe=max(maxe,f.second);
        vector<long long> inv(maxe+1);
        for(int i=1;i<=maxe;i++) inv[i]=invll(i);

        vector<int> exponents(factors.size(),0);
        long long ans=dfs_count(0,factors,exponents,N,A,inv,1ULL);
        cout<<"Case #"<<tc<<": "<<ans<<"\n";
    }
    return 0;
}
