bool isGoodNumber(int n) {
    // Write your code here.
    unordered_map<int, int> hash;
    int check = 0;
    int temp = n;
    while(true){
        hash[temp]++;
        if(temp == 1){
            break;
        }
        if(hash[temp] > 1){
            check = 1;
            break;
        }
        int sum = 0;
        while(temp != 0){
            sum += (temp%10)*(temp%10);
            temp /= 10;
        }
        temp = sum;
    }
    if(check == 0){
        return true;
    }
    return false;
}
