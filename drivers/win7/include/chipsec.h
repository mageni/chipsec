/*
CHIPSEC: Platform Security Assessment Framework
Copyright (c) 2010-2021, Intel Corporation

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; Version 2.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

Contact information:
chipsec@intel.com
*/
#ifndef CHIPSEC_H
#define CHIPSEC_H


#define DEVICE_NAME_U L"\\Device\\chipsec_hlpr"
#define DEVICE_NAME_DOS L"\\DosDevices\\chipsec_hlpr"

#define RDWRPCI_DEVICE_NAME_WIN32      "\\\\.\\chipsec_hlpr"


#ifndef CTL_CODE
	#pragma message("CTL_CODE undefined. Include winioctl.h or wdm.h")
#endif

#define CHIPSEC_CTL_ACCESS    (FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define CLOSE_DRIVER              CTL_CODE( FILE_DEVICE_UNKNOWN, 0x803, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define READ_PCI_CFG_REGISTER     CTL_CODE( FILE_DEVICE_UNKNOWN, 0x807, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define WRITE_PCI_CFG_REGISTER    CTL_CODE( FILE_DEVICE_UNKNOWN, 0x808, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_READ_PHYSMEM        CTL_CODE( FILE_DEVICE_UNKNOWN, 0x809, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_WRITE_PHYSMEM       CTL_CODE( FILE_DEVICE_UNKNOWN, 0x80a, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_LOAD_UCODE_PATCH    CTL_CODE( FILE_DEVICE_UNKNOWN, 0x80b, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_WRMSR               CTL_CODE( FILE_DEVICE_UNKNOWN, 0x80c, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_RDMSR               CTL_CODE( FILE_DEVICE_UNKNOWN, 0x80d, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define READ_IO_PORT              CTL_CODE( FILE_DEVICE_UNKNOWN, 0x80e, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define WRITE_IO_PORT             CTL_CODE( FILE_DEVICE_UNKNOWN, 0x80f, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define GET_CPU_DESCRIPTOR_TABLE  CTL_CODE( FILE_DEVICE_UNKNOWN, 0x810, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_SWSMI               CTL_CODE( FILE_DEVICE_UNKNOWN, 0x811, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_ALLOC_PHYSMEM       CTL_CODE( FILE_DEVICE_UNKNOWN, 0x812, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_CPUID               CTL_CODE( FILE_DEVICE_UNKNOWN, 0x813, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_HYPERCALL           CTL_CODE( FILE_DEVICE_UNKNOWN, 0x814, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_GET_PHYSADDR        CTL_CODE( FILE_DEVICE_UNKNOWN, 0x815, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_MAP_IO_SPACE        CTL_CODE( FILE_DEVICE_UNKNOWN, 0x816, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_FREE_PHYSMEM        CTL_CODE( FILE_DEVICE_UNKNOWN, 0x817, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_WRCR                CTL_CODE( FILE_DEVICE_UNKNOWN, 0x818, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_RDCR                CTL_CODE( FILE_DEVICE_UNKNOWN, 0x819, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_MSGBUS_SEND_MESSAGE CTL_CODE( FILE_DEVICE_UNKNOWN, 0x820, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )
#define IOCTL_WRITE_MMIO          CTL_CODE( FILE_DEVICE_UNKNOWN, 0x821, METHOD_BUFFERED, CHIPSEC_CTL_ACCESS )

#endif  // CHIPSEC_H
