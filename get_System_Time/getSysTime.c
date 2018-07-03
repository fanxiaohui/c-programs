//==================================================================
//================= @INCLUDES ======================================
//==================================================================
#include <stdio.h>
#include <time.h>

//==================================================================
//================= @DEFINES =======================================
//==================================================================

//==================================================================
//================= @ENUMS =========================================
//==================================================================

//==================================================================
//================= @DATATYPES =====================================
//==================================================================

//==================================================================
//================= @FUNCTION PROTOTYPE ============================
//==================================================================


//==================================================================
//================= @FUNCTION DEFINITION ===========================
//==================================================================
int main (void)
{
	time_t result;

        result = time(NULL);
       
	printf("%s %d secs since the Epoch\n", asctime(localtime(&result)), result);

	return 0;
}





