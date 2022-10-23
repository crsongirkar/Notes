void rotate(int** A, int n11, int n12) {
    int c,d;
    for (c = 1; c < n11; c++){
      for( d = 0 ; d < c ; d++ ){
      	int temp =A[d][c];
      	A[d][c] = A[c][d];
      	A[c][d] = temp;
	}
}
    for (c = 0; c < n11; c++){
      for( d = 0 ; d < n12/2 ; d++ ){
      	int temp =A[c][d];
      	A[c][d] = A[c][n12-d-1];
      	A[c][n12-d-1] = temp;
	  }
   }
}
// Interview Bit 
