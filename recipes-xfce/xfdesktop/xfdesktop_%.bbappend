SUMMARY = "ADLINK XFCE Desktop Manager "
SECTION = "x11/base"
AUTHOR = "Dinesh kumar"
LICENSE = "CLOSED"

FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI:append = " file://adlink.jpg"

# Default wallpaper, path relative to datadir.
EXTRA_OEMESON:append = " -Ddefault-backdrop-filename=backgrounds/xfce/adlink.jpg"

do_install:append() {
    install -d ${D}${datadir}/backgrounds/xfce
    install -m 0644 ${UNPACKDIR}/adlink.jpg ${D}${datadir}/backgrounds/xfce/
    # ship only the ADLINK wallpaper
    rm -f ${D}${datadir}/backgrounds/xfce/xfce-*
}

FILES:${PN} += "${datadir}/backgrounds"
