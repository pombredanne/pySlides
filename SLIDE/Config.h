#define ADAM 1
#define BETA1 0.9
#define BETA2 0.999
#define EPS 0.00000001

//1: wta; 2: Densified wta; 3: topk minhash; 4: simhash
#define HashFunction 2
#define BUCKETSIZE 128
//for minhash
#define TOPK 30
//for simhash
#define Ratio 3
//for wta/dwta
#define binsize 8
//Mode 1: Topk thresholding Mode 4: Sampling
#define Mode 4

#define THRESH 2

#define FIFO 1

#define LOADWEIGHT 0

#define MAPLEN 325056
