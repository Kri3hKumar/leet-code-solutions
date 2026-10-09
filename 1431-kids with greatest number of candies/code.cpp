class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int sizee = candies.size();
        vector<bool> arr;

        // Finding the most number of candies
        int most = candies[0];
        // int index;
        for(int i = 0; i < sizee; i++){
            // arr.push_back(candies[i]);
            if(candies[i] > most){
                most = candies[i];
            }
        }
        // cout << most ;
        for(int i = 0; i < sizee ; i++){
            if(candies[i] + extraCandies >= most) {
                arr.push_back(true);
            }

            else{
                arr.push_back(false);
            }
        }
        return arr;

    }
};
