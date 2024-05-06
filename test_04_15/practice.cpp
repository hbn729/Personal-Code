#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> matrix={{1,10,4,2},{9,3,8,7,},{15,16,17,12}};
            vector<int>ans;
        for(int i=0;i<matrix.size();i++){
            int minx=99999999;
            int xindex=0;
            int yindex=0;
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]<minx){
                    minx=matrix[i][j]; 
                    xindex=i;
                    yindex=j;
                }
            }
            int k=0;
            int isMax=1;
            while(k<matrix.size()){
                if(matrix[xindex][yindex]<matrix[k][yindex]){
                    isMax=0;
                    break;
                }
                else k++;
            }
            if(isMax)ans.push_back(matrix[xindex][yindex]);
        }
        for(int i=0;i<ans.size();i++){
            cout<<123456789<<endl;
        }
}