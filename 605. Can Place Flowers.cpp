class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int N = flowerbed.size();

        if (!n) return true;

        if (N == 1) {
            if (flowerbed[0] == 0 && n <= 1) return true;
            else return false;
        }

        if (N == 2) {
            if (flowerbed[0] == 0 && flowerbed[1] == 0 && n == 1) return true;
            else return false;
        }
        
        if (flowerbed[0] == 0 && flowerbed[1] == 0 && n) {
            n--;
            flowerbed[0] = 1;
        }

        if (flowerbed[N-1] == 0 && flowerbed[N-2] == 0 && n) {
            n--;
            flowerbed[N-1] = 1;
        }

        for(int i = 1; i < N-1; i++)
        {   
            if (flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
                flowerbed[i] = 1;
                n--;
            }
            if (!n)break;
        }

        if (!n) return true;
        return false;
    }
};
