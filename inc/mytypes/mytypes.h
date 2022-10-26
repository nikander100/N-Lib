/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mytypes.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/15 17:05:50 by nvan-der      #+#    #+#                 */
/*   Updated: 2022/10/15 17:53:36 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief This header will store all my custom types mostly they are based of
 * c11+ types that don't yet exist in c99 or apple sys types that I don't have
 * on linux/windows.
 */

#ifndef MYTYPES_H
# define MY_YPES_H

typedef __signed char			t_int8;
typedef unsigned char			t_uint8;
typedef short					t_int16;
typedef unsigned short			t_uint16;
typedef int						t_int32;
typedef unsigned int			t_uint32;
typedef long long				t_int64;
typedef unsigned long long		t_uint64;
/** 
 * @brief you can do bitwise operationa on a (u)intptr comared to on a void *
*/
typedef long					t_intptr;
/**
 * @brief you can do bitwise operationa on a (u)intptr comared to on a void *
 */
typedef unsigned long			t_uintptr;
#endif /* _U_INT64_T */
