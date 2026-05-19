#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(ssv_init_cli, "", "");
KSYMTAB_FUNC(ssv_deinit_cli, "", "");
KSYMTAB_FUNC(tu_ssvdevice_init, "", "");
KSYMTAB_FUNC(tu_ssvdevice_exit, "", "");
KSYMTAB_FUNC(snprintf_res, "", "");
KSYMTAB_DATA(tu_ssv_cfg, "", "");
KSYMTAB_DATA(tu_cfg_cmds, "", "");
KSYMTAB_FUNC(tu_ssv6xxx_hci_deregister, "", "");
KSYMTAB_FUNC(tu_ssv6xxx_hci_register, "", "");
KSYMTAB_FUNC(tu_ssv6xxx_hci_init, "", "");
KSYMTAB_FUNC(tu_ssv6xxx_hci_exit, "", "");
KSYMTAB_FUNC(ssv6xxx_umac_hci_start, "", "");
KSYMTAB_FUNC(ssv6xxx_umac_test, "", "");
KSYMTAB_FUNC(ssv6xxx_umac_reg_read, "", "");
KSYMTAB_FUNC(ssv6xxx_umac_reg_write, "", "");
KSYMTAB_FUNC(ssv6xxx_umac_tx_frame, "", "");
KSYMTAB_FUNC(ssv6xxx_umac_attach, "", "");
KSYMTAB_FUNC(ssv6xxx_umac_deattach, "", "");
KSYMTAB_FUNC(tu_ssv6xxx_init, "", "");
KSYMTAB_FUNC(tu_ssv6xxx_exit, "", "");
KSYMTAB_FUNC(ssv6xxx_usb_init, "", "");
KSYMTAB_FUNC(ssv6xxx_usb_exit, "", "");
KSYMTAB_FUNC(tu_ssv6xxx_sdio_probe, "", "");
KSYMTAB_FUNC(tu_ssv6xxx_sdio_remove, "", "");
KSYMTAB_FUNC(tu_ssv6xxx_sdio_suspend, "", "");
KSYMTAB_FUNC(tu_ssv6xxx_sdio_resume, "", "");
KSYMTAB_DATA(tu_ssv6xxx_sdio_driver, "", "");
KSYMTAB_FUNC(tu_ssv6xxx_sdio_init, "", "");
KSYMTAB_FUNC(tu_ssv6xxx_sdio_exit, "", "");
KSYMTAB_FUNC(rockchip_wifi_power, "", "");
KSYMTAB_FUNC(rockchip_wifi_set_carddetect, "", "");

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("sdio:c*v3030d3030*");
MODULE_ALIAS("platform:SSV6200A");
MODULE_ALIAS("platform:RSV6200A");
MODULE_ALIAS("platform:SSV6006A");
MODULE_ALIAS("platform:SSV6006C");
MODULE_ALIAS("platform:SSV6006D");
MODULE_ALIAS("usb:v8065p6000d*dc*dsc*dp*ic*isc*ip*in*");
