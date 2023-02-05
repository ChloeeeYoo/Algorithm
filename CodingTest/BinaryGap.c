

int checkBinGap (int bn[], int size, int pos){
  int retVal = 0;
  if(bn[pos] == 1){
    for(int i = pos + 1; i < size; i++){
      if(bn[i] == 0){
        ++retVal;
      }else{
        return retVal;
      }
    }
  }else{
    return 0;
  }
  return 0;
}

int getBinGap (int bn[], int size){
  int maxVal = 0;
  for(int i = 0; i < size; i++){
    maxVal = max(maxVal, checkBinGap(bn, size, i));
  }
  return maxVal;
}

int solution (int N){
  int binaryNum[32];
  int i = 0;
  while(N > 0){
    binaryNum[i] = N % 2;
    N = N / 2;
    i++;
  }
  return getBinGap(binaryNum, i+1)
}
