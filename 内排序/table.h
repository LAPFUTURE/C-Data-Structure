#define MAXSIZE 100
typedef int keytype;
typedef struct{
	keytype key;
	int other;
}recordtype;

typedef struct{
	recordtype r[MAXSIZE+1];
	int length;
}table; 
