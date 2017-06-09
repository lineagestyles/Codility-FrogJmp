int solution(int X, int Y, int D) {
    int roznica=Y-X;
    if(roznica%D>0){return (roznica/D)+1;}
    else return roznica/D;
    
}