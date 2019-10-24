/*Convert boolean value to integer*/
#ifndef _BOOL2INT_H_
#define _BOOL2INT_H_
static inline int bool2int(bool res) {
	if(res)
		return 1;
	else
		return 0;
}
#endif
