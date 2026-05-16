int mySqrt(int x) {
    if (x<2){
    return x;
    }
    long left=0, right=x, square, mid;
    int ans=0;
    while(left<=right){
        mid=left+(right-left)/2;
        square=mid*mid;
        if(square==x){
            return mid;
        }
        else if(square<x){
            ans = mid;
            left=mid+1;
        }
        else{
            right =mid -1;
        }
    }
    return ans;
}