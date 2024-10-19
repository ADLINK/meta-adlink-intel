
LICENSE = "CLOSED"

inherit systemd

SRC_URI = "file://xfce4_startup.service"

do_install() {
    install -d ${D}${systemd_unitdir}/system
    install -m 0644 ${WORKDIR}/xfce4_startup.service ${D}${systemd_unitdir}/system
}

SYSTEMD_PACKAGES = "${PN}"
SYSTEMD_SERVICE:${PN} = "xfce4_startup.service"

FILES:${PN} += "/lib/systemd/system/xfce4_startup.service"


