method 1:
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>res(arr.begin(),arr.end());
        int i=0,j=0;
        while(i<arr.size()){
            if(res[j]==0){
                arr[i++]=0;
                if(i<arr.size())
                    arr[i++]=0;
                j++;
            }else{
                arr[i++]=res[j++];
        }
        }
        
    }
};
method 2:
	class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i=0, n=arr.size();
        while(i<n)
        {
            if(arr[i]==0)
            {
                arr.insert(arr.begin()+i, 0);
                i += 2;
            }
            else
                i++;
        }
        arr.resize(n);
    }
};
