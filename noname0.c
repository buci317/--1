#include<stdio.h>

int main()
{
	int nums[] = {2, 7, 11, 15};
	int n = 4;
	int target, i, j;
	int result[] = {-1, -1};
	
	printf("nums=[%d, %d, %d, %d]\n", nums[0], nums[1], nums[2], nums[3]);
	printf("请输入目标：");
	
	scanf("%d", &target);
	
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(nums[i] + nums[j] == target){
				result[0] = i;
				result[1] = j;
			}
		}
	}
	
	if(result[0] != -1){
		printf("nums[%d] + nums[%d] = %d", result[0], result[1], target);
	}else{
		printf("抱歉，nums 中没有两个元素和为 %d ", target);
	}
	
	return 0;
}


