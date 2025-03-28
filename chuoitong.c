int main(){
	int n;
	scanf ("%d" , &n);
	int a[n+1];
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &a[i]);
	}
	a[n] = a[n-1];
	int cnt = 1 , g = a[0] , max = 0, tong = a[0], ans = 1, pos = 0;
	
	for(int i = 1 ; i <= n ; i++){
		
		if(a[i] != a[i-1]){
			++cnt;
			g += a[i];
		}
		
		
		else {
			if(cnt > ans){
				ans = cnt;
				tong = g;
				pos = i - cnt;
			}
			else if(cnt == ans){
				if(g > tong){
					pos = i - cnt;
					tong = g;
				}
				
			}
			cnt = 1;g = a[i];
		}
		
	}
	printf ("%d %d\n" , ans , tong);
	for(int i = pos ; i < pos + ans ; i++){
		printf ("%d ", a[i]);
	}
	
}
