class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
      int f=0, i=n-1;
      while(f<i){
          int tmp=arr[f];
          arr[f]=arr[i];
          arr[i]=tmp;
          f++;
          i--;
         
      }
    }
};
