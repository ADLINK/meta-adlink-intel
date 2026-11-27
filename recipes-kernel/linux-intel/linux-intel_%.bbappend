require ${@bb.utils.contains('DISTRO_FEATURES', 'efi-secure-boot', 'recipes-kernel/linux/linux-yocto-efi-secure-boot.inc', '', d)}
FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"
SRC_URI:append = "  file://adlink-x68-kmeta;type=kmeta;destsuffix=/adlink-x68-kmeta \
		    file://0001-Avoid-ACPI-probe-due-to-resource-conflict-with-BIOS.patch \
		    file://x86_CVE-2026-98432_ipv4-free-inet_opt-and-ireq_opt-after-RCU-grace-period.patch \
"		    
KERNEL_FEATURES:append:x86-64 = " adlink.scc"

#SRCREV_machine = "${AUTOREV}"

#SRCREV_machine = "e6bfde1a9e4ef459ba4b93b0439d1a019e0ad77c"
	    
