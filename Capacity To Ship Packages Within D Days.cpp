class Solution {
public:
     int ispossible(vector<int> &A,int students,int pages){
        int cnt = 0;
  int sumAllocated = 0;
  for (int i = 0; i < A.size(); i++) {
    if (sumAllocated + A[i] > pages) {
      cnt++;
      sumAllocated = A[i];
      if (sumAllocated > pages) return false;
    } else {
      sumAllocated += A[i];
    }
  }
  if (cnt < students) return true;
  return false;
       
        
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
     int s = 0;
        int sum = 0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        
        int e = sum;
        int mid = s+(e-s)/2;
        int ans=0;
        
        while(s<=e){
            if(ispossible(weights,days,mid)){
                // ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        
        return s;
    }
};
