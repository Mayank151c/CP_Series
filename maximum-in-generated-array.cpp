int getMaximumGenerated(int n) {
    
    if(n<2) {
        return n;
    }
    
    int maximum = INT_MIN;
    vector<int> v(n+1);
    v[0]=0;
    v[1]=1;
    
    for(int i=2;i<n+1;i++) {
        int half = i/2;
        if(i%2==0) {
            v[i] = v[half];
        }
        else {
            v[i] = v[half] + v[half+1];
        }
        
        maximum<v[i] ? maximum=v[i]:0;
    }
    return maximum;
}