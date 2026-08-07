DISTRO_FEATURES:append = " systemd x11 virtualization opengl vulkan opencl"


IMAGE_FSTYPES = " wic.bmap wic.gz"
DISK_SIGNATURE_UUID = ""

WKS_ADLINK_ROOT_FS = "ext4"
WKS_FILE:intel-corei7-64 = "adlink-efidisk.wks.in"
WKS_ADLINK_ROOT_SIZE_MB = "8192"
WKS_ADLINK_DATA_SIZE_MB = "2048"
WKS_ADLINK_SWAP_SIZE_MB = "1024"
WKS_ADLINK_BOOT_SIZE_MB = "128"

# Runtime environment export setting for x11
IMAGE_INSTALL:append = " xinit-env"

# Set features for media
IMAGE_INSTALL:append = " gstreamer1.0-libav"
DISTRO_FEATURES:append = " msdk onevpl"
IMAGE_INSTALL:append = " intel-media-driver"
IMAGE_INSTALL:append = "${@bb.utils.contains("DISTRO_FEATURES","msdk", " libvpl vpl-gpu-rt", "", d)}"
IMAGE_INSTALL:append = "${@bb.utils.contains("DISTRO_FEATURES","msdk", " libvpl-tools", "", d)}"
IMAGE_INSTALL:append = "${@bb.utils.contains("DISTRO_FEATURES","onevpl", " libvpl vpl-gpu-rt", "", d)}"
PACKAGECONFIG:append:pn-gstreamer1.0-plugins-base = "${@bb.utils.filter('DISTRO_FEATURES', 'opengl', d)}"
IMAGE_INSTALL:append = " vulkan-loader"

# mesa iris driver
PACKAGECONFIG:append:pn-mesa:class-target = " gallium gallium-llvm"
MESA_FORCE_DRIVER = "iris"
PREFERRED_PROVIDER_virtual/mesa-native = "${PREFERRED_PROVIDER_virtual/mesa}-native"
PACKAGECONFIG:append:pn-mesa-native:class-native = " gles"

DISTRO_FEATURES:append = " dri3"



# Required additional host tools
HOSTTOOLS += "git-lfs"


# Enable freeglut for elkhart-lake
IMAGE_INSTALL:append = " freeglut"

# Add multimedia components
DISTRO_FEATURES:append = " pulseaudio"

# linux-firmware
IMAGE_INSTALL:append = " linux-firmware intel-linux-firmware"

# Enable TPM drivers
MACHINE_FEATURES:append = " tpm"

# X11-related
IMAGE_INSTALL:append = " xinput"




# use openssh instead of dropbear
IMAGE_FEATURES:append = " ssh-server-openssh"


IMAGE_INSTALL:append = " kernel-base kernel-devsrc kernel-modules"

#Add usb_modeswitch support
IMAGE_INSTALL:append = " usb-modeswitch"

# autoload modules
KERNEL_MODULE_AUTOLOAD:append = " configfs uhid"

# OS-release info
IMAGE_INSTALL:append = " os-release"


###################
# OpenVINO PACKAGES
###################

# Enable clDNN only when needed, as this will pull in additional compile-time
# and runtime dependencies for Intel Graphics Compute Runtime for OpenCL
PACKAGECONFIG:append:pn-openvino-inference-engine = " opencl"

# Enable building inference engine python API.
PACKAGECONFIG:append:pn-openvino-inference-engine = " python3"

# This adds inference engine related libraries to the target image
IMAGE_INSTALL:append = " openvino-inference-engine"

# This adds inference engine samples to the target image
IMAGE_INSTALL:append = " openvino-inference-engine-samples"

# Include inference engine python API package to the target image.
# This is required for running e2e_oss test cases
IMAGE_INSTALL:append = " openvino-inference-engine-python3"

# Enable MYRIAD plugin
# IMAGE_INSTALL:append = " openvino-inference-engine-vpu-firmware"

# Model Optimizer retired upstream in OpenVINO 2025, replaced by ovc

# python3 packages needed by the inference engine python test script to transform the input image to expected format
IMAGE_INSTALL:append = " python3-opencv python3-numpy"

# Include optimized deep learning models and a set of demos
IMAGE_INSTALL:append = " open-model-zoo"

########## clang/llvm size problems
BAD_RECOMMENDATIONS:append = " clang-staticdev"

# usb mouse wakeup and SATA PM and GBE and Serial PM
IMAGE_INSTALL:append = " udev-usbpower udev-satapower udev-gbepower udev-serialpower"

# Enable shim and the chain of trust
DISTRO_FEATURES:append = " efi-secure-boot"
IMAGE_INSTALL:append = " shim grub-efi"

IMAGE_EFI_BOOT_FILES:append = " \
    bootx64.efi;EFI/BOOT/shimx64.efi \
    grubx64.efi;EFI/BOOT/grubx64.efi \
    bootx64.efi;EFI/BOOT/bootx64.efi \
    grub.cfg;EFI/BOOT/grub.cfg \
    grub.cfg.sig;EFI/BOOT/grub.cfg.sig \
    boot-menu.inc;EFI/BOOT/boot-menu.inc \
    boot-menu.inc.sig;EFI/BOOT/boot-menu.inc.sig \
    efi-secure-boot.inc;EFI/BOOT/efi-secure-boot.inc \
    efi-secure-boot.inc.sig;EFI/BOOT/efi-secure-boot.inc.sig \
    password.inc;EFI/BOOT/password.inc \
    password.inc.sig;EFI/BOOT/password.inc.sig \
    grubenv;EFI/BOOT/grubenv \
    bzImage.sig;bzImage.sig \
"
# enable the VA-API hardware plugins
DISTRO_FEATURES:append = " vaapi"
PACKAGECONFIG:append:pn-gstreamer1.0-plugins-bad = " va"
 
IMAGE_INSTALL:append = " \
    libva-utils \
    gstreamer1.0-plugins-bad-va \
    gstreamer1.0-plugins-base \
    gstreamer1.0-plugins-good \
    gstreamer1.0-plugins-bad \
    igt-gpu-tools \
"

# Additional serial consoles
APPEND:append = " console=ttyS4,115200n8 console=ttyS5,115200n8 i915.force_probe=*" 
APPEND += "video=eDP-1:d rootwait console=ttyS0,115200 console=tty0 i915.enable_guc=2"
APPEND:append = " udmabuf.list_limit=8192"
APPEND:append = " split_lock_detect=off i915.enable_fbc=1 i915.enable_guc=3 i915.max_vfs=7 ignore_msrs=1 report_ignored_msrs=0"
