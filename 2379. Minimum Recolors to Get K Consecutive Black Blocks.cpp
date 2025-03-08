int minimumRecolors(string blocks, int k) {
    int block_count=0, ans=INT_MAX;
    for(int i=0; i<blocks.size();i++){
        if(i-k>=0 && blocks[i-k]=='B') block_count--;
        if(blocks[i]=='B')block_count++;
        ans=min(ans,k-block_count);
    }
    return ans;
}