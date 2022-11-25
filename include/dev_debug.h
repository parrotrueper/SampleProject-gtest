
#ifndef __DEV_DEBUG_H__
#define __DEV_DEBUG_H__

#ifdef __cplusplus
extern "C"
{
#endif /*__cplusplus */

/* the  DD_PRINTK_EN macro is set in CMakeLists.txt 
        ~~~~~~~~~~~~
*/
/**
 * macro for the print function to use
 **/
#if DD_PRINTK_EN
/* for the kernel module */
	#define DD_PRINTF(...)	printk(__VA_ARGS__) 
	#define DD_RETURN(errorcode)		return(-errorcode)
#else
/* for out of tree development */
	#include <stdio.h>
	#define dump_stack()	printf("dump stack goes here\n");
	#define DD_PRINTF(...)	printf(__VA_ARGS__)
	#define DD_RETURN(errorcode)		do{printf("bailing out...\n");return(-errorcode);}while(0)
#endif /* DD_PRINTK_EN */		

#define __FUNC__	__func__

/**
 * macro to define our own version of assert that does no evil
 **/
#define DD_ASSERT( bcondition )     do{                                                           \
										if(bcondition){}                                          \
										else{  											          \
											DD_PRINTF("\nBUG! ASSERTION FAILED in:\n%s(), L:%d, ?:%s\n", \
												__FUNC__, __LINE__, #bcondition); 		          \
											dump_stack();		 						          \
										} 												          \
									} while(0)


#define DD_TRACE(...)	DD_PRINTF(__VA_ARGS__)

#ifdef __cplusplus
}
#endif /*__cplusplus */

#endif /* __DEV_DEBUG_H__ */
