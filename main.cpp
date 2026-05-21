class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;

        for(int number : nums){
            vector<int> aux;

            while(number > 0){
                aux.push_back(number % 10);
                number /= 10;
            }

            for(int i = aux.size() - 1; i >= 0; i--){
                result.push_back(aux[i]);
            }
        }
        return result;
    }
};
