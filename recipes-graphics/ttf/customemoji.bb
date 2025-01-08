SUMMARY = "Custom TTF Fonts"
DESCRIPTION = "A collection of custom TTF fonts to add emoji support."
LICENSE = "CLOSED"

SRC_URI = "file://NotoColorEmoji.ttf"

S = "${WORKDIR}"

do_install() {
    
    install -d ${D}${sysconfdir}

    
    install -d ${D}${sysconfdir}/profile.d
    echo 'export LANG=en_US.UTF-8' > ${D}${sysconfdir}/profile.d/locale.sh
    echo 'export LC_ALL=en_US.UTF-8' >> ${D}${sysconfdir}/profile.d/locale.sh

    
    install -d ${D}${datadir}/fonts/ttf/
    install -m 0644 ${WORKDIR}/NotoColorEmoji.ttf ${D}${datadir}/fonts/ttf/
}


FILES:${PN} = "${datadir}/fonts/ttf/ ${sysconfdir}/profile.d/locale.sh"


do_rootfs_append[dirs] = "${WORKDIR}"
do_rootfs_append[noexec] = "1"
