#include <iostream>
#include <vector>
#include <set>
using namespace std;

void uniqueSort(vector<int>& nums) {
    // 初始化一个空的 set 用于存储唯一元素
    set<int> uniqueNums;

    // 遍历输入的元素
    for (int i = 0; i < nums.size(); i++) {
        // 如果该元素不在 uniqueNums 中，则将其加入其中
        if (uniqueNums.count(nums[i])) {
            uniqueNums.erase(nums[i]);
        } else {
            uniqueNums.insert(nums[i]);
        }
    }

    // 将 uniqueNums 中的元素复制到 nums 中，并按升序排序
    nums.clear();
    copy(uniqueNums.begin(), uniqueNums.end(), back_inserter(nums));
    sort(nums.begin(), nums.end());
}

int main() {
    vector<int> nums;

    // 从标准输入读取一系列整数
    while (true) {
        int num;
        cin >> num;
        if (num == 0) {
            // 如果输入的是 0，则退出循环
            break;
        } else if (num > 0) {
            // 如果输入的是正数，则将其加入 nums 中
            nums.push_back(num);
        }
    }

    // 调用 uniqueSort 函数去除重复元素并按升序排序
    uniqueSort(nums);

    // 按顺序打印处理后的容器中的元素
    cout << "Unique sorted elements: ";
    copy(nums.begin(), nums.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}