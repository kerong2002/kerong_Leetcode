#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    int k=0;
    int target;
    while(scanf("%d",&k) != EOF){
        nums.push_back(k);
    }
    scanf("%d",&target);
    for(int i=0;i<nums.size();++i){
            for(int j=i+1;j< nums.size();++j){
                int sum = nums[i] + nums[j];
                if(sum == target){
                    printf("%d %d",i,j);
                }
            }
        }
    return 0;
}
