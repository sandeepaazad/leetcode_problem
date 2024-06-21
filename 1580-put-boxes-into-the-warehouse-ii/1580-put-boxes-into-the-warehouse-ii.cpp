class Solution {
public:
    int maxBoxesInWarehouse(std::vector<int>& boxes, std::vector<int>& warehouse) {
        std::sort(boxes.rbegin(), boxes.rend());
        int l = 0, res = 0;
        int r = warehouse.size() - 1;

        for (int b = 0; b < boxes.size(); ++b) {
            if (l <= r) {
                if (boxes[b] <= warehouse[l]) {
                    ++l;
                    ++res;
                } else if (boxes[b] <= warehouse[r]) {
                    --r;
                    ++res;
                }
            }
        }

        return res;
    }
};