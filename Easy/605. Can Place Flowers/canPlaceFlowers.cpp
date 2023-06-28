class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int key = 0;
        int counter = 0;
        int size = flowerbed.size();

        if ((size == 1 && flowerbed[0] == 0) ||
            (size > 1 && flowerbed[0] == 0 && flowerbed[1] == 0))
            flowerbed[0] = '1', ++counter;
        if (size > 1 && flowerbed[size - 2] == 0 && flowerbed[size - 1] == 0)
                    flowerbed[size - 1] = '1', ++counter;
        if (size > 3)
        {
            for (int i = 1; i < size - 1; i++)
                if (flowerbed[i] == 0 && flowerbed[i + 1] == 0 && flowerbed[i - 1] == 0)
                {
                    flowerbed[i] = '1';
                    ++counter;
                }
        }
        if (n <= counter)
            return (true);
        return (false);
    }
};