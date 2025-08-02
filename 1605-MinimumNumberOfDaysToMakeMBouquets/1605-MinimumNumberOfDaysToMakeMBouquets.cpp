// Last updated: 8/2/2025, 10:45:31 PM
class Solution {
public:
bool possible(vector<int>& bloomDay,int day, long m, long k){
    int count = 0;
    int nofB = 0;
    for(int i = 0;i<bloomDay.size();i++){
    if(bloomDay[i]<=day){
        count++;
    }
    else
    count = 0;
    if(count == k){
        nofB++;
        count = 0;
    }
    }
    return nofB>=m;
}
    int minDays(vector<int>& bloomDay, long m, long k) {
        if(bloomDay.size()<m*k)
        return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high  = *max_element(bloomDay.begin(),bloomDay.end());
        int result;
        while(low<=high)
        {
            int mid = low+(high - low)/2;
            if(possible(bloomDay,mid,m,k)){
                result = mid;
                high = mid-1;
            }
            else
            low = mid+1;
        }
        return result;
    }
};