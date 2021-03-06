/*
 * rcu_pointer.h: RCU pointer-manipulation macros.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Copyright (c) 2008 Paul E. McKenney, IBM Corporation.
 */

#ifndef _rcu_assign_pointer
#define rcu_assign_pointer(p, v) ({ smp_mb(); ACCESS_ONCE(p) = (v); })
#elif !defined(rcu_assign_pointer)
#define rcu_assign_pointer _rcu_assign_pointer
#endif /* !defined(rcu_assign_pointer) */

/* Assume DEC Alpha is dead.  Long live DEC Alpha. */

#ifndef _rcu_dereference
#define rcu_dereference(p) (*(volatile typeof(p) *)&(p))
#elif !defined(rcu_dereference)
#define rcu_dereference _rcu_dereference
#endif /* !defined(rcu_dereference) */
