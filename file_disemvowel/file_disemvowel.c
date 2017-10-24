#include <stdio.h>
#include <stdbool.h>

#define BUF_SIZE 1024

bool is_vowel(char c) { 
	switch(c){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			return true;
		default:
			return false;	
}

int copy_non_vowels(int num_chars, char* in_buf, char* out_buf) {
    /*
     * Copy all the non-vowels from in_buf to out_buf. 
     * num_chars indicates how many characters are in in_buf, 
     * and this function should return the number of non-vowels that
     * that were copied over.
     */
	int i;
	int count = 0;

	for (i =0; i<num_chars; ++i){
		if (is_vowel(in_buf[i]) == false){
			out_buf[count] = in_buf[i];
			count++;
		}
	}

	return count;

}

char

void disemvowel(FILE* inputFile, FILE* outputFile) { 
    /*
     * Copy all the non-vowels from inputFile to outputFile.
     * Create input and output buffers, and use fread() to repeatedly read
     * in a buffer of data, copy the non-vowels to the output buffer, and
     * use fwrite to write that out. 
     */
	char inbuffer[BUF_SIZE+1];
	char outbuffer[BUF_SIZE+1];
	int nRead = 1024;

	fp = fopen("$(inputFile)","r");
	fw = fopen("$(outputFile)","w+");
	while(nRead < BUT_SIZE){
		nRead=fread(inbuffer,sizeof(char),BUF_SIZE,fp);
		wSize= copy_non_vowels(nRead,inbuffer,outbuffer);
		fwrite(outbuffer,sizeof(char),wSize,fw);
	}


}

int main(int argc, char *argv[]) { 
       	FILE *inputFile; 
	FILE *outputFile;
	int len, i, j = 0;
	char str[1024];

    // Code that processes the command line arguments 
    // and sets up inputFile and outputFile.

	
	if ( argc > 2 ){
		disemvowel(argv[1],argv[2]);
	} else if ( argv > 1){
		disemvowel(argv[1],outpit);
	} else {
		fr = stdin;
		len = strlen(fr);
		for(i = 0; i<len; i++) {
			if(is_vowel(fr[i]) == false) {    
			str[j] = fr[i];
			j++;
			}	
  		}
		str[j] = '\0';
		strcpy(fr, str);  
		printf("%s\n", str);
	}

	return 0; 
}
