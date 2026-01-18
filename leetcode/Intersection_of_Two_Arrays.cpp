#include<iostream>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> result;
        for ( int i = 0; i < nums1.size(); i++ ) {
            for ( int j = 0; j < nums2.size(); j++ ) {
                if ( nums1[i] == nums2[j] ) {
                    result.insert(nums1[i]);
                    break;
                }
            }
        }
        vector<int> answer(result.begin(), result.end());
        return answer;
    }

int main(){
  vector<int> nums1 = {1,2,2,1};
  vector<int> nums2 = {2,2};
  vector<int> result = intersection(nums1, nums2);
  for ( int i = 0; i < result.size(); i++ ) {
    cout << result[i] << " ";  
  }
  cout << endl;
  return 0;
}
