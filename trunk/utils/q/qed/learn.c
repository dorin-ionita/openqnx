/*
 * $QNXLicenseC:
 * Copyright 2007, QNX Software Systems. All Rights Reserved.
 * 
 * You must obtain a written license from and pay applicable license fees to QNX 
 * Software Systems before you may reproduce, modify or distribute this software, 
 * or any work that includes all or part of this software.   Free development 
 * licenses are available for evaluation and non-commercial purposes.  For more 
 * information visit http://licensing.qnx.com or email licensing@qnx.com.
 *  
 * This file may contain contributions from others.  Please review this entire 
 * file for other proprietary rights or license notices, as well as the QNX 
 * Development Suite License Guide at http://licensing.qnx.com/license-guide/ 
 * for other information.
 * $
 */





#include <stdio.h>
#include "manif.h"
#include "struct.h"

#define EXT extern
#include "externs.h"

int learn() {

	if(*lp++ != ' ')
		return(ERROR9);

	if(learn_ptr)
		return(ERROR6);

	if((learn_ptr = ccalloc(LEARN_BUF_SIZE + 2)) == 0)
		return(ERROR0);

	lp = esc_char(lp, learn_ptr);
	learn_index = 1;
	return( 0 );
	}
