// BakeBit Example for using the analog read.

#include "bakebit.h"

int main(void)
{		
	int adata;
	
	//Exit on failure to start communications with the BakeBit
	if(init()==-1)
		exit(1);
	
	while(1)
	{
		adata=analogRead(0);
		printf("analog read %d\n",adata);
		if(adata==-1)
			printf("IO Error");
	}
   	return 1;
}
