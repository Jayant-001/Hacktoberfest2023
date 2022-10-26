int maxArea(vector<int>& height) {
       int maxar =0;
        int s =0;
        int e = height.size()-1;
        while(s < e){
            int lh = height[s];
            int rh = height[e];
            int hmin = min(lh ,rh);
            maxar = max(maxar , hmin*(e - s));
            if(lh < rh){
                s++;
            }
            else{
                e--;
            }
        }
        return maxar;
    }
