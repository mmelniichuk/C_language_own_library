#include "libmx.h"

unsigned long mx_hex_to_nbr (const char *hex)
{
    unsigned long nbr = 0;
    char byte = 0;
    
    if (!hex)
	    return 0;
    
	while (*hex)
    {
		byte = *hex++;
        
        if (byte >= '0' && byte <= '9') 
		    byte = byte - '0';

        else if (byte >= 'a' && byte <= 'f') 
		    byte = byte - 'a' + 10;

        else if (byte >= 'A' && byte <= 'F') 
		    byte = byte - 'A' + 10;       
         
        nbr = (nbr << 4) | (byte & 0xF);
    }
    return nbr;
}
