// Last updated: 8/18/2026, 10:39:26 PM
1class Solution {
2    public List<List<Integer>> threeSum(int[] nums) {
3
4        List<List<Integer>> list = new ArrayList<>();
5
6        Arrays.sort(nums);
7
8        for (int i = 0; i < nums.length - 2; i++) {
9
10            // Skip duplicate i
11            if (i > 0 && nums[i] == nums[i - 1]) {
12                continue;
13            }
14
15            int j = i + 1;
16            int k = nums.length - 1;
17
18            while (j < k) {
19
20                int sum = nums[i] + nums[j] + nums[k];
21
22                if (sum == 0) {
23
24                    list.add(Arrays.asList(
25                        nums[i],
26                        nums[j],
27                        nums[k]
28                    ));
29
30                    j++;
31                    k--;
32
33                    // Skip duplicate j
34                    while (j < k && nums[j] == nums[j - 1]) {
35                        j++;
36                    }
37
38                    // Skip duplicate k
39                    while (j < k && nums[k] == nums[k + 1]) {
40                        k--;
41                    }
42                }
43
44                else if (sum > 0) {
45                    k--;
46                }
47
48                else {
49                    j++;
50                }
51            }
52        }
53
54        return list;
55    }
56}