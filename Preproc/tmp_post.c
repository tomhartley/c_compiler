# 1 "tmp.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 324 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "tmp.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 22 "/usr/include/stdio.h" 3 4


# 59 "/usr/include/stdio.h" 3 4






# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 27 "/usr/include/sys/cdefs.h" 3 4



# 65 "/usr/include/sys/cdefs.h" 3 4
























# 103 "/usr/include/sys/cdefs.h" 3 4









# 131 "/usr/include/sys/cdefs.h" 3 4

















































	#define __deprecated_msg(_msg) __attribute__((deprecated(_msg)))





	#define __deprecated_enum_msg(_msg) __deprecated_msg(_msg)






























# 227 "/usr/include/sys/cdefs.h" 3 4


# 242 "/usr/include/sys/cdefs.h" 3 4



# 259 "/usr/include/sys/cdefs.h" 3 4















# 289 "/usr/include/sys/cdefs.h" 3 4


















































# 373 "/usr/include/sys/cdefs.h" 3 4









# 398 "/usr/include/sys/cdefs.h" 3 4










# 430 "/usr/include/sys/cdefs.h" 3 4


# 452 "/usr/include/sys/cdefs.h" 3 4


# 462 "/usr/include/sys/cdefs.h" 3 4
















# 486 "/usr/include/sys/cdefs.h" 3 4


# 496 "/usr/include/sys/cdefs.h" 3 4






































# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 26 "/usr/include/sys/_symbol_aliasing.h" 3 4

















































































































































































































































# 534 "/usr/include/sys/cdefs.h" 2 3 4











# 562 "/usr/include/sys/cdefs.h" 3 4
















# 589 "/usr/include/sys/cdefs.h" 3 4











# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 26 "/usr/include/sys/_posix_availability.h" 3 4

















































# 600 "/usr/include/sys/cdefs.h" 2 3 4
















































































































# 65 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 22 "/usr/include/Availability.h" 3 4

 


 
# 117 "/usr/include/Availability.h" 3 4



# 134 "/usr/include/Availability.h" 3 4



# 160 "/usr/include/Availability.h" 3 4









# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 22 "/usr/include/AvailabilityInternal.h" 3 4














    #ifdef __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__
        
        
    #endif



    #ifdef __ENVIRONMENT_TV_OS_VERSION_MIN_REQUIRED__
        
        
        #define __TV_OS_VERSION_MAX_ALLOWED 90000
        
        
    #endif



    #ifdef __ENVIRONMENT_WATCH_OS_VERSION_MIN_REQUIRED__
        
        
        #define __WATCH_OS_VERSION_MAX_ALLOWED 20000
        
        
    #endif






    #if 1
        
    #else
        
    #endif










    
    
        #define __IPHONE_OS_VERSION_MAX_ALLOWED     90200
    
    
    




    
        #if 1
            
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_0    __attribute__((availability(ios,introduced=2.0,deprecated=2.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=2.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_1    __attribute__((availability(ios,introduced=2.0,deprecated=2.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=2.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_2    __attribute__((availability(ios,introduced=2.0,deprecated=2.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=2.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_0    __attribute__((availability(ios,introduced=2.0,deprecated=3.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=3.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_1    __attribute__((availability(ios,introduced=2.0,deprecated=3.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=3.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_2    __attribute__((availability(ios,introduced=2.0,deprecated=3.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=3.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_0    __attribute__((availability(ios,introduced=2.0,deprecated=4.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=4.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_1    __attribute__((availability(ios,introduced=2.0,deprecated=4.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=4.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_2    __attribute__((availability(ios,introduced=2.0,deprecated=4.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=4.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_3    __attribute__((availability(ios,introduced=2.0,deprecated=4.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_3_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=4.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_5_0    __attribute__((availability(ios,introduced=2.0,deprecated=5.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_5_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=5.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_5_1    __attribute__((availability(ios,introduced=2.0,deprecated=5.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_5_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=5.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_6_0    __attribute__((availability(ios,introduced=2.0,deprecated=6.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_6_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=6.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_6_1    __attribute__((availability(ios,introduced=2.0,deprecated=6.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_6_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=6.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=2.0,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=2.0,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=2.0,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=2.0,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=2.0,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=2.0,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=2.0,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=2.0,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=2.0,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=2.0,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.0,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=2.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1                    __attribute__((availability(ios,introduced=2.1)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=2.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_2_2    __attribute__((availability(ios,introduced=2.2,deprecated=2.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_2_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=2.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_0    __attribute__((availability(ios,introduced=2.2,deprecated=3.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=3.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_1    __attribute__((availability(ios,introduced=2.2,deprecated=3.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=3.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_2    __attribute__((availability(ios,introduced=2.2,deprecated=3.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=3.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_0    __attribute__((availability(ios,introduced=2.2,deprecated=4.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=4.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_1    __attribute__((availability(ios,introduced=2.2,deprecated=4.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=4.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_2    __attribute__((availability(ios,introduced=2.2,deprecated=4.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=4.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_3    __attribute__((availability(ios,introduced=2.2,deprecated=4.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_3_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=4.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_5_0    __attribute__((availability(ios,introduced=2.2,deprecated=5.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_5_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=5.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_5_1    __attribute__((availability(ios,introduced=2.2,deprecated=5.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_5_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=5.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_6_0    __attribute__((availability(ios,introduced=2.2,deprecated=6.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_6_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=6.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_6_1    __attribute__((availability(ios,introduced=2.2,deprecated=6.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_6_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=6.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=2.2,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=2.2,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=2.2,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=2.2,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=2.2,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=2.2,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=2.2,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=2.2,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=2.2,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=2.2,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=2.2,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=2.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0                    __attribute__((availability(ios,introduced=3.0)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=3.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_1    __attribute__((availability(ios,introduced=3.1,deprecated=3.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=3.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_2    __attribute__((availability(ios,introduced=3.1,deprecated=3.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_2_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=3.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_0    __attribute__((availability(ios,introduced=3.1,deprecated=4.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_0_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=4.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_1    __attribute__((availability(ios,introduced=3.1,deprecated=4.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=4.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_2    __attribute__((availability(ios,introduced=3.1,deprecated=4.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_2_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=4.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_3    __attribute__((availability(ios,introduced=3.1,deprecated=4.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_3_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=4.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_5_0    __attribute__((availability(ios,introduced=3.1,deprecated=5.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_5_0_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=5.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_5_1    __attribute__((availability(ios,introduced=3.1,deprecated=5.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_5_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=5.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_6_0    __attribute__((availability(ios,introduced=3.1,deprecated=6.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_6_0_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=6.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_6_1    __attribute__((availability(ios,introduced=3.1,deprecated=6.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_6_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=6.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=3.1,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=3.1,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=3.1,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=3.1,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=3.1,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=3.1,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=3.1,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=3.1,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=3.1,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=3.1,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=3.1,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=3.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2                    __attribute__((availability(ios,introduced=3.2)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=3.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_0    __attribute__((availability(ios,introduced=4.0,deprecated=4.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=4.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_1    __attribute__((availability(ios,introduced=4.0,deprecated=4.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=4.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_2    __attribute__((availability(ios,introduced=4.0,deprecated=4.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_2_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=4.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_3    __attribute__((availability(ios,introduced=4.0,deprecated=4.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_3_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=4.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_5_0    __attribute__((availability(ios,introduced=4.0,deprecated=5.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_5_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=5.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_5_1    __attribute__((availability(ios,introduced=4.0,deprecated=5.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_5_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=5.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_6_0    __attribute__((availability(ios,introduced=4.0,deprecated=6.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_6_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=6.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_6_1    __attribute__((availability(ios,introduced=4.0,deprecated=6.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_6_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=6.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=4.0,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=4.0,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=4.0,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=4.0,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=4.0,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=4.0,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=4.0,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=4.0,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=4.0,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=4.0,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=4.0,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=4.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_1                    __attribute__((availability(ios,introduced=4.1)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_1_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=4.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_4_2    __attribute__((availability(ios,introduced=4.2,deprecated=4.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_4_2_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=4.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_4_3    __attribute__((availability(ios,introduced=4.2,deprecated=4.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_4_3_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=4.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_5_0    __attribute__((availability(ios,introduced=4.2,deprecated=5.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_5_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=5.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_5_1    __attribute__((availability(ios,introduced=4.2,deprecated=5.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_5_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=5.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_6_0    __attribute__((availability(ios,introduced=4.2,deprecated=6.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_6_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=6.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_6_1    __attribute__((availability(ios,introduced=4.2,deprecated=6.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_6_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=6.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=4.2,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=4.2,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=4.2,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=4.2,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=4.2,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=4.2,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=4.2,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=4.2,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=4.2,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=4.2,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=4.2,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=4.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_3                    __attribute__((availability(ios,introduced=4.3)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_3_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=4.3)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_5_0    __attribute__((availability(ios,introduced=5.0,deprecated=5.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_5_0_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=5.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_5_1    __attribute__((availability(ios,introduced=5.0,deprecated=5.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_5_1_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=5.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_6_0    __attribute__((availability(ios,introduced=5.0,deprecated=6.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_6_0_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=6.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_6_1    __attribute__((availability(ios,introduced=5.0,deprecated=6.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_6_1_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=6.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=5.0,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=5.0,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=5.0,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=5.0,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=5.0,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=5.0,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=5.0,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=5.0,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=5.0,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=5.0,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=5.0,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=5.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1                    __attribute__((availability(ios,introduced=5.1)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=5.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_6_0    __attribute__((availability(ios,introduced=6.0,deprecated=6.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_6_0_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=6.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_6_1    __attribute__((availability(ios,introduced=6.0,deprecated=6.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_6_1_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=6.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=6.0,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=6.0,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=6.0,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=6.0,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=6.0,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=6.0,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=6.0,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=6.0,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=6.0,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=6.0,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=6.0,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=6.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1                    __attribute__((availability(ios,introduced=6.1)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=6.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_7_0    __attribute__((availability(ios,introduced=7.0,deprecated=7.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_7_0_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=7.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_7_1    __attribute__((availability(ios,introduced=7.0,deprecated=7.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_7_1_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=7.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=7.0,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=7.0,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=7.0,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=7.0,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=7.0,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=7.0,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=7.0,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=7.0,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=7.0,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=7.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_1                    __attribute__((availability(ios,introduced=7.1)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_1_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=7.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_0    __attribute__((availability(ios,introduced=8.0,deprecated=8.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_0_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=8.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_1    __attribute__((availability(ios,introduced=8.0,deprecated=8.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_1_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=8.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=8.0,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=8.0,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=8.0,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=8.0,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=8.0,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=8.0,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=8.0,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=8.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1                    __attribute__((availability(ios,introduced=8.1)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=8.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_8_2    __attribute__((availability(ios,introduced=8.2,deprecated=8.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_8_2_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=8.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_8_3    __attribute__((availability(ios,introduced=8.2,deprecated=8.3)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_8_3_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=8.3,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=8.2,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=8.2,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=8.2,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=8.2,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=8.2,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=8.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3                    __attribute__((availability(ios,introduced=8.3)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=8.3)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_8_4    __attribute__((availability(ios,introduced=8.4,deprecated=8.4)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_8_4_MSG(_msg)    __attribute__((availability(ios,introduced=8.4,deprecated=8.4,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_9_0    __attribute__((availability(ios,introduced=8.4,deprecated=9.0)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_9_0_MSG(_msg)    __attribute__((availability(ios,introduced=8.4,deprecated=9.0,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=8.4,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=8.4,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=8.4,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=8.4,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=8.4)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_0                    __attribute__((availability(ios,introduced=9.0)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=9.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_9_1    __attribute__((availability(ios,introduced=9.1,deprecated=9.1)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_9_1_MSG(_msg)    __attribute__((availability(ios,introduced=9.1,deprecated=9.1,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_9_2    __attribute__((availability(ios,introduced=9.1,deprecated=9.2)))
            
                    #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_9_2_MSG(_msg)    __attribute__((availability(ios,introduced=9.1,deprecated=9.2,message=_msg)))
            


            #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_NA               __attribute__((availability(ios,introduced=9.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_2                    __attribute__((availability(ios,introduced=9.2)))
            
            #if 1
                    
            #else
                    
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_NA_MSG(_msg)     __attribute__((availability(ios,introduced=9.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_NA_DEP__IPHONE_NA                __attribute__((availability(ios,unavailable)))
            
        #endif
    

    
# 12340 "/usr/include/AvailabilityInternal.h" 3 4


# 13146 "/usr/include/AvailabilityInternal.h" 3 4
        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 101002
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 101002
            
        #else
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_10        __attribute__((unavailable))
        




        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 1090
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 1090
            
        #else
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_8        __attribute__((unavailable))
        




        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 1070
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 1070
            
        #else
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_6        __attribute__((unavailable))
        




        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 1050
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 1050
            
        #else
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_4        __attribute__((unavailable))
        




        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 1030
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 1030
            
        #else
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_2        __attribute__((unavailable))
        




        #if __MAC_OS_X_VERSION_MAX_ALLOWED < 1010
            
        #elif __MAC_OS_X_VERSION_MIN_REQUIRED < 1010
            
        #else
            
        #endif
        
            #define __AVAILABILITY_INTERNAL__MAC_10_0        __attribute__((unavailable))
        




        #define __AVAILABILITY_INTERNAL__MAC_NA             __attribute__((unavailable))
        





            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_1              __AVAILABILITY_INTERNAL__MAC_10_0
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_1              
            
        #endif
        







            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_2              __AVAILABILITY_INTERNAL__MAC_10_0
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_2              __AVAILABILITY_INTERNAL__MAC_10_2
            
        #endif
        
# 13267 "/usr/include/AvailabilityInternal.h" 3 4
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_3              __AVAILABILITY_INTERNAL__MAC_10_0
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_3              __AVAILABILITY_INTERNAL__MAC_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_3              
            
        #endif
        
# 13288 "/usr/include/AvailabilityInternal.h" 3 4
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_4              __AVAILABILITY_INTERNAL__MAC_10_0
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_4              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_4              __AVAILABILITY_INTERNAL__MAC_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_4              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_4              __AVAILABILITY_INTERNAL__MAC_10_4
            
        #endif
        
# 13313 "/usr/include/AvailabilityInternal.h" 3 4
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_5              __AVAILABILITY_INTERNAL__MAC_10_0
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_5              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_5              __AVAILABILITY_INTERNAL__MAC_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_5              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_5              __AVAILABILITY_INTERNAL__MAC_10_4
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_5              
            
        #endif
        
# 13342 "/usr/include/AvailabilityInternal.h" 3 4
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_6              __AVAILABILITY_INTERNAL__MAC_10_0
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_6              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_6              __AVAILABILITY_INTERNAL__MAC_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_6              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_6              __AVAILABILITY_INTERNAL__MAC_10_4
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_6              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_6              __AVAILABILITY_INTERNAL__MAC_10_6
            
        #endif
        
# 13375 "/usr/include/AvailabilityInternal.h" 3 4
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_7              __AVAILABILITY_INTERNAL__MAC_10_0
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_7              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_7              __AVAILABILITY_INTERNAL__MAC_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_7              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_7              __AVAILABILITY_INTERNAL__MAC_10_4
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_7              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_7              __AVAILABILITY_INTERNAL__MAC_10_6
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_7              
            
        #endif
        
# 13412 "/usr/include/AvailabilityInternal.h" 3 4
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_8              __AVAILABILITY_INTERNAL__MAC_10_0
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_8              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_8              __AVAILABILITY_INTERNAL__MAC_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_8              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_8              __AVAILABILITY_INTERNAL__MAC_10_4
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_8              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_8              __AVAILABILITY_INTERNAL__MAC_10_6
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_8              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_8              __AVAILABILITY_INTERNAL__MAC_10_8
            
        #endif
        
# 13453 "/usr/include/AvailabilityInternal.h" 3 4
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_9              __AVAILABILITY_INTERNAL__MAC_10_0
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_9              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_9              __AVAILABILITY_INTERNAL__MAC_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_9              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_9              __AVAILABILITY_INTERNAL__MAC_10_4
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_9              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_9              __AVAILABILITY_INTERNAL__MAC_10_6
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_9              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_9              __AVAILABILITY_INTERNAL__MAC_10_8
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_9              
            
        #endif
        
# 13498 "/usr/include/AvailabilityInternal.h" 3 4
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_10              __AVAILABILITY_INTERNAL__MAC_10_0
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_10              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10              __AVAILABILITY_INTERNAL__MAC_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10              __AVAILABILITY_INTERNAL__MAC_10_4
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10              __AVAILABILITY_INTERNAL__MAC_10_6
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10              __AVAILABILITY_INTERNAL__MAC_10_8
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_10              __AVAILABILITY_INTERNAL__MAC_10_10
            
        #endif
        
# 13547 "/usr/include/AvailabilityInternal.h" 3 4
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_10_2              __AVAILABILITY_INTERNAL__MAC_10_0
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_10_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10_2              __AVAILABILITY_INTERNAL__MAC_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10_2              __AVAILABILITY_INTERNAL__MAC_10_4
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10_2              __AVAILABILITY_INTERNAL__MAC_10_6
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10_2              __AVAILABILITY_INTERNAL__MAC_10_8
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_10_2              __AVAILABILITY_INTERNAL__MAC_10_10
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_10_2              
            
        #endif
        
# 13600 "/usr/include/AvailabilityInternal.h" 3 4
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_10_3              __AVAILABILITY_INTERNAL__MAC_10_0
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10_3              __AVAILABILITY_INTERNAL__MAC_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10_3              __AVAILABILITY_INTERNAL__MAC_10_4
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10_3              __AVAILABILITY_INTERNAL__MAC_10_6
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10_3              __AVAILABILITY_INTERNAL__MAC_10_8
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_10_3              __AVAILABILITY_INTERNAL__MAC_10_10
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_10_3              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_10_3              __AVAILABILITY_INTERNAL__MAC_10_10_3
            
        #endif
        
# 13657 "/usr/include/AvailabilityInternal.h" 3 4
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_0
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_4
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_6
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_8
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_10
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11              __AVAILABILITY_INTERNAL__MAC_10_11
            
        #endif
        
# 13718 "/usr/include/AvailabilityInternal.h" 3 4
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_0
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_2
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_4
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_6
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_8
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_10
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11_2              
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_10_3
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_11
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_11_2              __AVAILABILITY_INTERNAL__MAC_10_11_2
            
        #endif
        
        #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_0
        
        #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_2
        
        #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_4
        
        #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_6
        
        #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_8
        
        #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_10
        
        #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_NA_MSG(_msg)   
        
        #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_10_3
        
        #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_11
        
        #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_NA_MSG(_msg)   __AVAILABILITY_INTERNAL__MAC_10_11_2
        
        #define __AVAILABILITY_INTERNAL__MAC_NA_DEP__MAC_NA_MSG(_msg)     __attribute__((unavailable))
    



# 169 "/usr/include/Availability.h" 2 3 4


    #define __OSX_AVAILABLE_STARTING(_osx, _ios) __AVAILABILITY_INTERNAL##_ios
    

    #define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro, _osxDep, _iosIntro, _iosDep, _msg)                                                      __AVAILABILITY_INTERNAL##_iosIntro##_DEP##_iosDep##_MSG(_msg)


# 189 "/usr/include/Availability.h" 3 4



  #if 1
    
    #define __OS_AVAILABILITY_MSG(_target, _availability, _msg)  __attribute__((availability(_target,_availability,message=_msg)))
  











  #if 1
    
    #define __IOS_EXTENSION_UNAVAILABLE(_msg)  __OS_AVAILABILITY_MSG(ios_app_extension,unavailable,_msg)
  




    #define __OS_AVAILABILITY_MSG(macosx_app_extension,unavailable,_msg)
    








  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif







  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #define __IOS_PROHIBITED                     __attribute__((availability(ios,unavailable)))
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) __OS_AVAILABILITY_MSG(ios,deprecated=_dep,_msg)
  







  #define __IOS_PROHIBITED







  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #define __TVOS_PROHIBITED                     __attribute__((availability(tvos,unavailable)))
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) __OS_AVAILABILITY_MSG(tvos,deprecated=_dep,_msg)
  







  #define __TVOS_PROHIBITED







  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #define __WATCHOS_PROHIBITED                     __attribute__((availability(watchos,unavailable)))
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) __OS_AVAILABILITY_MSG(watchos,deprecated=_dep,_msg)
  







  #define __WATCHOS_PROHIBITED







  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)




# 66 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/_types.h" 1 3 4
# 22 "/usr/include/_types.h" 3 4






# 1 "/usr/include/sys/_types.h" 1 3 4
# 27 "/usr/include/sys/_types.h" 3 4







# 1 "/usr/include/machine/_types.h" 1 3 4
# 27 "/usr/include/machine/_types.h" 3 4






# 1 "/usr/include/i386/_types.h" 1 3 4
# 27 "/usr/include/i386/_types.h" 3 4










typedef __signed char		__int8_t;



typedef unsigned char		__uint8_t;
typedef	short			__int16_t;
typedef	unsigned short		__uint16_t;
typedef int			__int32_t;
typedef unsigned int		__uint32_t;
typedef long long		__int64_t;
typedef unsigned long long	__uint64_t;

typedef long			__darwin_intptr_t;
typedef unsigned int		__darwin_natural_t;


# 68 "/usr/include/i386/_types.h" 3 4


typedef int			__darwin_ct_rune_t;	





typedef union {
	char		__mbstate8[128];
	long long	_mbstateL;			
} __mbstate_t;

typedef __mbstate_t		__darwin_mbstate_t;	


typedef long int	__darwin_ptrdiff_t;	







typedef long unsigned int		__darwin_size_t;	





typedef __builtin_va_list	__darwin_va_list;	





typedef int		__darwin_wchar_t;	




typedef __darwin_wchar_t	__darwin_rune_t;	


typedef int		__darwin_wint_t;	




typedef unsigned long		__darwin_clock_t;	
typedef __uint32_t		__darwin_socklen_t;	
typedef long			__darwin_ssize_t;	
typedef long			__darwin_time_t;	


# 33 "/usr/include/machine/_types.h" 2 3 4





# 34 "/usr/include/sys/_types.h" 2 3 4








# 54 "/usr/include/sys/_types.h" 3 4

typedef	__int64_t	__darwin_blkcnt_t;	
typedef	__int32_t	__darwin_blksize_t;	
typedef __int32_t	__darwin_dev_t;		
typedef unsigned int	__darwin_fsblkcnt_t;	
typedef unsigned int	__darwin_fsfilcnt_t;	
typedef __uint32_t	__darwin_gid_t;		
typedef __uint32_t	__darwin_id_t;		
typedef __uint64_t	__darwin_ino64_t;	

typedef __darwin_ino64_t __darwin_ino_t;	



typedef __darwin_natural_t __darwin_mach_port_name_t; 
typedef __darwin_mach_port_name_t __darwin_mach_port_t; 
typedef __uint16_t	__darwin_mode_t;	
typedef __int64_t	__darwin_off_t;		
typedef __int32_t	__darwin_pid_t;		
typedef __uint32_t	__darwin_sigset_t;	
typedef __int32_t	__darwin_suseconds_t;	
typedef __uint32_t	__darwin_uid_t;		
typedef __uint32_t	__darwin_useconds_t;	
typedef	unsigned char	__darwin_uuid_t[16];
typedef	char	__darwin_uuid_string_t[37];


# 1 "/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 27 "/usr/include/sys/_pthread/_pthread_types.h" 3 4







// pthread opaque structures

# 56 "/usr/include/sys/_pthread/_pthread_types.h" 3 4

struct __darwin_pthread_handler_rec {
	void (*__routine)(void *);	// Routine to call
	void *__arg;			// Argument to pass
	struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
	long __sig;
	char __opaque[56];
};

struct _opaque_pthread_cond_t {
	long __sig;
	char __opaque[40];
};

struct _opaque_pthread_condattr_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_mutex_t {
	long __sig;
	char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_once_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
	long __sig;
	char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
	long __sig;
	char __opaque[16];
};

struct _opaque_pthread_t {
	long __sig;
	struct __darwin_pthread_handler_rec  *__cleanup_stack;
	char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;


# 81 "/usr/include/sys/_types.h" 2 3 4









# 28 "/usr/include/_types.h" 2 3 4


# 38 "/usr/include/_types.h" 3 4

typedef	int		__darwin_nl_item;
typedef	int		__darwin_wctrans_t;

typedef	__uint32_t	__darwin_wctype_t;


























# 68 "/usr/include/stdio.h" 2 3 4




# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 27 "/usr/include/sys/_types/_va_list.h" 3 4




typedef __darwin_va_list va_list;

# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 27 "/usr/include/sys/_types/_size_t.h" 3 4



typedef __darwin_size_t        size_t; 

# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 27 "/usr/include/sys/_types/_null.h" 3 4


# 74 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/sys/stdio.h" 1 3 4
# 27 "/usr/include/sys/stdio.h" 3 4









# 1 "/usr/include/Availability.h" 1 3 4
# 22 "/usr/include/Availability.h" 3 4

 

# 200 "/usr/include/Availability.h" 3 4
    #define __attribute__((availability(_target, _availability)))
    





  #if 1
    
    #define   
  




    #define 
    








  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif







  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #define __IOS_PROHIBITED                     __attribute__((availability(ios,unavailable)))
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) 
  







  #define __IOS_PROHIBITED







  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #define __TVOS_PROHIBITED                     __attribute__((availability(tvos,unavailable)))
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) 
  







  #define __TVOS_PROHIBITED







  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #define __WATCHOS_PROHIBITED                     __attribute__((availability(watchos,unavailable)))
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) 
  







  #define __WATCHOS_PROHIBITED







  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)




# 36 "/usr/include/sys/stdio.h" 2 3 4



int	renameat(int, __const char *, int, __const char *) __OSX_AVAILABLE_STARTING(101000, 80000);






# 76 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t		fpos_t;










struct __sbuf {
	unsigned char	*_base;
	int		_size;
};


struct __sFILEX;


# 121 "/usr/include/stdio.h" 3 4

typedef	struct __sFILE {
	unsigned char *_p;	
	int	_r;		
	int	_w;		
	short	_flags;		
	short	_file;		
	struct	__sbuf _bf;	
	int	_lbfsize;	

	
	void	*_cookie;	
	int	(*_close)(void *);
	int	(*_read) (void *, char *, int);
	fpos_t	(*_seek) (void *, fpos_t, int);
	int	(*_write)(void *, __const char *, int);

	
	struct	__sbuf _ub;	
	struct __sFILEX *_extra; 
	int	_ur;		

	
	unsigned char _ubuf[3];	
	unsigned char _nbuf[1];	

	
	struct	__sbuf _lb;	

	
	int	_blksize;	
	fpos_t	_offset;	
} FILE;


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;






	

# 178 "/usr/include/stdio.h" 3 4

















				











# 215 "/usr/include/stdio.h" 3 4
















void	 clearerr(FILE *);
int	 fclose(FILE *);
int	 feof(FILE *);
int	 ferror(FILE *);
int	 fflush(FILE *);
int	 fgetc(FILE *);
int	 fgetpos(FILE * restrict, fpos_t *);
char	*fgets(char * restrict, int, FILE *);



FILE	*fopen(__const char * restrict, __const char * restrict) __DARWIN_ALIAS_STARTING_MAC_##1060( __asm("_" "x" ));

int	 fprintf(FILE * restrict, __const char * restrict, ...) __attribute__((__format__ (__printf__, 2,  3)));
int	 fputc(int, FILE *);
int	 fputs(__const char * restrict, FILE * restrict) __asm("_" "x" );
size_t	 fread(void * restrict, size_t, size_t, FILE * restrict);
FILE	*freopen(__const char * restrict, __const char * restrict,
                 FILE * restrict) __asm("_" "x" );
int	 fscanf(FILE * restrict, __const char * restrict, ...) __attribute__((__format__ (__scanf__, 2,  3)));
int	 fseek(FILE *, long, int);
int	 fsetpos(FILE *, __const fpos_t *);
long	 ftell(FILE *);
size_t	 fwrite(__const void * restrict, size_t, size_t, FILE * restrict) __asm("_" "x" );
int	 getc(FILE *);
int	 getchar(void);
char	*gets(char *);
void	 perror(__const char *);
int	 printf(__const char * restrict, ...) __attribute__((__format__ (__printf__, 1,  2)));
int	 putc(int, FILE *);
int	 putchar(int);
int	 puts(__const char *);
int	 remove(__const char *);
int	 rename (__const char *, __const char *);
void	 rewind(FILE *);
int	 scanf(__const char * restrict, ...) __attribute__((__format__ (__scanf__, 1,  2)));
void	 setbuf(FILE * restrict, char * restrict);
int	 setvbuf(FILE * restrict, char * restrict, int, size_t);
int	 sprintf(char * restrict, __const char * restrict, ...) __attribute__((__format__ (__printf__, 2,  3)));
int	 sscanf(__const char * restrict, __const char * restrict, ...) __attribute__((__format__ (__scanf__, 2,  3)));
FILE	*tmpfile(void);


__deprecated_msg("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")

char	*tmpnam(char *);
int	 ungetc(int, FILE *);
int	 vfprintf(FILE * restrict, __const char * restrict, va_list) __attribute__((__format__ (__printf__, 2,  0)));
int	 vprintf(__const char * restrict, va_list) __attribute__((__format__ (__printf__, 1,  0)));
int	 vsprintf(char * restrict, __const char * restrict, va_list) __attribute__((__format__ (__printf__, 2,  0)));















char	*ctermid(char *);





FILE	*fdopen(int, __const char *) __DARWIN_ALIAS_STARTING_MAC_##1060( __asm("_" "x" ));

int	 fileno(FILE *);









             
int	 pclose(FILE *);



FILE	*popen(__const char *, __const char *) __DARWIN_ALIAS_STARTING_MAC_##1060( __asm("_" "x" ));

           















int	__srget(FILE *);
int	__svfscanf(FILE *, __const char *, va_list) __attribute__((__format__ (__scanf__, 2,  0)));
int	__swbuf(int, FILE *);







# 355 "/usr/include/stdio.h" 3 4




# 367 "/usr/include/stdio.h" 3 4







void	 flockfile(FILE *);
int	 ftrylockfile(FILE *);
void	 funlockfile(FILE *);
int	 getc_unlocked(FILE *);
int	 getchar_unlocked(void);
int	 putc_unlocked(int, FILE *);
int	 putchar_unlocked(int);



int	 getw(FILE *);
int	 putw(int, FILE *);



__deprecated_msg("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")

char	*tempnam(__const char *, __const char *) __asm("_" "x" );




















# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 27 "/usr/include/sys/_types/_off_t.h" 3 4



typedef __darwin_off_t		off_t;

# 412 "/usr/include/stdio.h" 2 3 4


int	 fseeko(FILE *, off_t, int);
off_t	 ftello(FILE *);




             
int	 snprintf(char * restrict, size_t, __const char * restrict, ...) __attribute__((__format__ (__printf__, 3,  4)));
int	 vfscanf(FILE * restrict, __const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2,  0)));
int	 vscanf(__const char * restrict, va_list) __attribute__((__format__ (__scanf__, 1,  0)));
int	 vsnprintf(char * restrict, size_t, __const char * restrict, va_list) __attribute__((__format__ (__printf__, 3,  0)));
int	 vsscanf(__const char * restrict, __const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2,  0)));











# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 27 "/usr/include/sys/_types/_ssize_t.h" 3 4



typedef __darwin_ssize_t        ssize_t; 

# 437 "/usr/include/stdio.h" 2 3 4


int	dprintf(int, __const char * restrict, ...) __attribute__((__format__ (__printf__, 2,  3))) __OSX_AVAILABLE_STARTING(1070, 40300);
int	vdprintf(int, __const char * restrict, va_list) __attribute__((__format__ (__printf__, 2,  0))) __OSX_AVAILABLE_STARTING(1070, 40300);
ssize_t getdelim(char ** restrict, size_t * restrict, int, FILE * restrict) __OSX_AVAILABLE_STARTING(1070, 40300);
ssize_t getline(char ** restrict, size_t * restrict, FILE * restrict) __OSX_AVAILABLE_STARTING(1070, 40300);








             
extern __const int sys_nerr;		
extern __const char *__const sys_errlist[];

int	 asprintf(char ** restrict, __const char * restrict, ...) __attribute__((__format__ (__printf__, 2,  3)));
char	*ctermid_r(char *);
char	*fgetln(FILE *, size_t *);
__const char *fmtcheck(__const char *, __const char *);
int	 fpurge(FILE *);
void	 setbuffer(FILE *, char *, int);
int	 setlinebuf(FILE *);
int	 vasprintf(char ** restrict, __const char * restrict, va_list) __attribute__((__format__ (__printf__, 2,  0)));
FILE	*zopen(__const char *, __const char *, int);





FILE	*funopen(__const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, __const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));



















# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 22 "/usr/include/secure/_stdio.h" 3 4










# 1 "/usr/include/secure/_common.h" 1 3 4
# 22 "/usr/include/secure/_common.h" 3 4






# 37 "/usr/include/secure/_common.h" 3 4





# 32 "/usr/include/secure/_stdio.h" 2 3 4










extern int __sprintf_chk (char * restrict, int, size_t,
			  __const char * restrict, ...);








extern int __snprintf_chk (char * restrict, size_t, int, size_t,
			   __const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
			   __const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
			    __const char * restrict, va_list);














# 493 "/usr/include/stdio.h" 2 3 4



# 2 "tmp.c" 2
int main(){
  printf(Wibble); 
}


