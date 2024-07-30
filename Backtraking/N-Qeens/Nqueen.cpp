// first solution 
// Tc: O(N!)
// Sc: O(N*N)

bool check(int n,vector<string>&Borad , int i, int j){
    // upper left diagonal 
    int row =i , col =j;
    while(row > -1 && col >-1)
    {
        if(Borad[row][col] == 'Q')
        return 0;

        row-- ,col--;
    }
  row = i;
        col = j;
    // upper right diagonal 
    while(row >-1 && col < n){
        if(Borad[row][col] =='Q')
        return 0;

        row-- , col++;
    }

    return 1;
}
   void find(int row ,int n, vector<vector<string>>&ans,vector<string>&Borad,vector<bool>&column ){
    // base condition 
   if(row == n)
   {
    ans.push_back(Borad);
    return;
   }
//    put queen at any n position 
for(int j=0;j<n;j++)
{
    if(column[j]==0 && check(n,Borad,row,j))
    {
        column[j] = 1;
        Borad[row][j] ='Q';
        find(row+1,n,ans,Borad,column);
        column[j] =0;
        Borad[row][j] ='.';
    }
}
   }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>Borad(n);

        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        Borad[i].push_back('.');

        vector<bool>column(n,0);
        find(0,n,ans,Borad,column);
        return ans;
    }

    // 2. optimize solution 
    void find(int row ,int n, vector<vector<string>>&ans,vector<string>&Borad,vector<bool>&column ,vector<bool>&LeftDig,vector<bool>&RightDig){
    // base condition 
   if(row == n)
   {
    ans.push_back(Borad);
    return;
   }
//    put queen at any n position 
// left digonal n-1+col-row
// right digonal row+col

for(int j=0;j<n;j++)
{
    if(column[j]==0 && LeftDig[n-1+j-row] == 0 && RightDig[row+j]==0)
    {
        column[j] = 1;
        Borad[row][j] ='Q';
        LeftDig[n-1+j-row]= 1;
        RightDig[row+j] =1;
        find(row+1,n,ans,Borad,column,LeftDig,RightDig);
        column[j] =0;
        Borad[row][j] ='.';
        LeftDig[n-1+j-row]= 0;
        RightDig[row+j] =0;
    }
}
   }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>Borad(n);

        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        Borad[i].push_back('.');

        vector<bool>LeftDig(2*n-1 ,0);
        vector<bool>RightDig(2*n-1, 0);

        vector<bool>column(n,0);
        find(0,n,ans,Borad,column,LeftDig,RightDig);
        return ans;
    }