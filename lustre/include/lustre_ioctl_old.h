/*
 * GPL HEADER START
 *
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 only,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License version 2 for more details (a copy is included
 * in the LICENSE file that accompanied this code).
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this program; If not, see
 * http://www.gnu.org/licenses/gpl-2.0.html
 *
 * GPL HEADER END
 */
/*
 * This file is part of Lustre, http://www.lustre.org/
 *
 * Compatibility for deprecated ioctls that should no longer be used by tools.
 *
 * Copyright (c) 2023, DataDirect Networks Storage, all rights reserved.
 */
#ifndef __LUSTRE_IOCTL_OLD_H
#define __LUSTRE_IOCTL_OLD_H

#include <linux/lnet/libcfs_ioctl.h> /* for IOCTL_LIBCFS_TYPE */

/* ioctl command is deprecated after release v1.v2 */
#define case_OBD_IOC_DEPRECATED(cmd, dev, v1, v2)			\
	case cmd:							\
	if (LUSTRE_VERSION_CODE > OBD_OCD_VERSION(v1, v2, 53, 0)) {	\
		static bool printed;					\
		CDEBUG(printed ? D_IOCTL : D_WARNING,			\
		       "%s: deprecated " #cmd " usage\n", dev);		\
		printed = true;					\
	}

#define case_OBD_IOC_DEPRECATED_FT(cmd, dev, v1, v2)			\
	case_OBD_IOC_DEPRECATED(cmd, dev, v1, v2)			\
	fallthrough

#endif /* __LUSTRE_IOCTL_OLD_H */
