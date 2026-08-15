// Last updated: 8/15/2026, 5:33:38 PM
class Solution {
    public int trap(int[] height) {
        //left_max boundary
        int left_boundary[]=new int[height.length];
        left_boundary[0]=height[0];
        for(int i=1;i<height.length;i++){
            left_boundary[i]=Math.max(height[i],left_boundary[i-1]);


        }
        //right_boundary
        int right_boundary[]=new int[height.length];
        right_boundary[height.length-1]=height[height.length-1];
        for(int j=height.length-2;j>=0;j--){
            right_boundary[j]=Math.max(height[j],right_boundary[j+1]);
        }
        //loop---trapped water
        int trapped_water=0;
        for(int k=0;k<height.length;k++){
            int water_level=Math.min(right_boundary[k],left_boundary[k]);
            trapped_water+=water_level-height[k];
        }
        return trapped_water;

        
    }
}