#include<bits/stdc++.h>

using namespace std;


void findCom(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int> tres, int i)
    {
        if(target==0)
        {
            res.push_back(tres);
            return;
        }
        while(i<candidates.size() && target-candidates[i]>=0)
        {
            tres.push_back(candidates[i]);
            findCom(candidates, target - candidates[i], res, tres, i);
            i++;

            tres.pop_back();
        }
    }

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        

        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> tres;
        int i = 0;

        findCom(candidates, target, res, tres, i);

        return res;
    }

int main()
{
	vector<int> candidates;
	int target = 7;
	vector<vector<int>> res1;
	candidates.push_back(2);
	candidates.push_back(3);
	candidates.push_back(6);
	candidates.push_back(7);
	
	res1 = combinationSum(candidates, target);
	for(int i=0;i<res1.size();i++)
	{
		for(int j=0;i<res1[i].size();j++)
		{
			cout<<res1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
