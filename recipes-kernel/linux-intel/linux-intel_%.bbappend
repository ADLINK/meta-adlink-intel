FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"
SRC_URI:append = "  file://adlink-x68-kmeta;type=kmeta;destsuffix=/adlink-x68-kmeta \
		    file://0001-Added-i2c-i801-support-for-sema.patch \
                    file://x86_CVE-2026-43284_xfrm-esp-fix-shared-skb-decrypt.patch \
"		    
KERNEL_FEATURES:append:x86-64 = " adlink.scc"

#SRCREV_machine = "${AUTOREV}"

#SRCREV_machine = "e6bfde1a9e4ef459ba4b93b0439d1a019e0ad77c"
	    
