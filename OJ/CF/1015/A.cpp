#include <bits/stdc++.h>

using namespace std;

const char newline = '\n';

int main(){
	int num_seg, uppr_cord, ans_cnt, l, r;
	ans_cnt = 0;

	vector< pair<int,int> > seg;
	vector< pair<int,int> > up_seg;
	vector<int> output;

	cin>> num_seg >> uppr_cord;

	for(int i=0; i<num_seg; i++){
		cin>> l >> r;
		seg.emplace_back(l,r);
	}

	sort(seg.begin(), seg.end());

	up_seg.push_back(seg[0]);

	for(int i=1; i<seg.size(); i++){
		auto prev = up_seg[up_seg.size()-1];
		auto curr = seg[i];
		
		if(prev.second < curr.first){
			up_seg.push_back(curr);
		}
		else{
			curr.first = min(curr.first,prev.first);
			curr.second = max(curr.second,prev.second);

			up_seg.pop_back();
			up_seg.push_back(curr);
		}
	}

	int var=1;
	for(int j=0; j<up_seg.size(); j++){
		while(var < up_seg[j].first){
			output.push_back(var);
			var++;
		}
		var = up_seg[j].second+1;
	}
	while(var <= uppr_cord){
		output.push_back(var);
		var++;
	}

	cout<< output.size() << newline;
	if(output.size()!=0){
		cout<< output[0];
		for(int i=1; i<output.size(); i++){
			cout << ' ' << output[i];
		}
		cout<< newline;
	}

	return 0;
}