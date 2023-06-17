#define ll long long int
class Solution {
public:
static const ll MAX=1005;
bool prime[MAX];
void sieve(){
fill(prime, prime+MAX, true);
prime[0] = prime[1] = false;
for(ll i=2;i*i<MAX;i++){
if(prime[i]){
for(ll j=i*i;j<MAX;j+=i){
prime[j] = false;
}
}
}
}
bool primeSubOperation(vector<int>& nums) {
sieve();
vector<int> primes; // 168 primes
for(int i=2;i<=1000;i++){
if(prime[i]) primes.push_back(i);
}
int n = nums.size();
vector<int> new_nums(n, -1);
new_nums[n-1] = nums[n-1];
for(int i=n-2;i>=0;i--){
if(nums[i] < new_nums[i+1]){
    new_nums[i] = nums[i];
continue;
}
for(auto p : primes){
if(p >= nums[i]){
new_nums[i] = nums[i];
break;
}
if(nums[i]-p < new_nums[i+1]){
new_nums[i] = nums[i] - p;
break;
}
}
}
for(int i=1;i<n;i++)
if(new_nums[i] <= new_nums[i-1]) return false;
return true;
}
};
