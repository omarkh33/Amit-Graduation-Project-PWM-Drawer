/*
 * BIT_MATH.h
 *
 * Created on: AUG 27, 2023
 *      Author: OMAR KHALID (OMAR162094@BUE.EDU.EG)
 */

#ifndef SERVICE_BIT_MATH_H_
#define SERVICE_BIT_MATH_H_

#define SET_BIT(REG,BIT) REG |=(1<<BIT)
#define CLR_BIT(REG,BIT) REG &=~(1<<BIT)
#define TGL_BIT(REG,BIT) REG ^=(1<<BIT)
#define GET_BIT(REG,BIT) ((REG>>BIT)&1)


#endif /* SERVICE_BIT_MATH_H_ */
