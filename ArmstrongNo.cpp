bool checkArmstrong(int n){
	int original = n;
	int sum = 0;
	int count = 0;
	int temp = n;

	while(temp>0){
		temp = temp/10;
		count++;
	}
	while(n>0){
		int digit = n%10;
		sum = sum + pow(digit,count);
		n = n/10;
	}

	if( sum == original){
		return true;
	}
	return false;
}