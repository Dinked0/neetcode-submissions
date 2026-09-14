class Solution:

    def search(self, nums, target, lo, hi):
        while lo <= hi:
            mid = (lo + hi) // 2

            if nums[mid] == target:
                return True
            elif nums[mid] < target:
                lo = mid + 1
            else:
                hi = mid - 1

        return False

    def threeSum(self, nums):
        nums.sort()
        ans = []

        n = len(nums)

        for i in range(n - 2):

            # Skip duplicate first values
            if i > 0 and nums[i] == nums[i - 1]:
                continue

            for j in range(i + 1, n - 1):

                # Skip duplicate second values
                if j > i + 1 and nums[j] == nums[j - 1]:
                    continue

                target = -(nums[i] + nums[j])

                # Since array is sorted, target must be after j
                if target < nums[j]:
                    continue

                # Binary search for target
                if self.search(nums, target, j + 1, n - 1):
                    ans.append([nums[i], nums[j], target])

        return ans