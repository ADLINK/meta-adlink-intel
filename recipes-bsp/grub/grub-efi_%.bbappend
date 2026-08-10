BOOT_CMD_ROOT ?= "PARTLABEL=primary"

do_adlink_boot_menu_cmdline() {
    if [ -f "${D}${EFI_BOOT_PATH}/boot-menu.inc" ]; then
        printf '%s\n' \
            'menuentry "ADLINK Linux" --unrestricted {' \
            '    savedefault' \
            '    set fallback=1' \
            "    linux /bzImage root=${BOOT_CMD_ROOT} ro rootwait ${APPEND}" \
            '}' > "${D}${EFI_BOOT_PATH}/boot-menu.inc"
    fi
}
addtask adlink_boot_menu_cmdline after do_install before do_sign

do_adlink_fix_grub_prefix() {
    if [ -f "${WORKDIR}/cfg" ]; then
        sed -i 's|${GRUB_PREFIX_DIR}/EFI/BOOT/grub.cfg|${GRUB_PREFIX_DIR}/grub.cfg|' "${WORKDIR}/cfg"
    fi
}
addtask adlink_fix_grub_prefix after do_compile before do_install
