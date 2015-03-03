mkdir $(pwd)/out
make -C $(pwd) O=$(pwd)/out VARIANT_DEFCONFIG=apq8084_sec_trlte_eur_defconfig apq8084_sec_defconfig SELINUX_DEFCONFIG=selinux_defconfig SELINUX_LOG_DEFCONFIG=selinux_log_defconfig TIMA_DEFCONFIG=tima_defconfig DMVERITY_DEFCONFIG=dmverity_defconfig
make -C $(pwd) O=$(pwd)/out
cp $(pwd)/out/arch/arm/boot/zImage $(pwd)/arch/arm/boot/zImage
