#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

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

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x321fd4fc, "usbnet_suspend" },
	{ 0xdec7b694, "usbnet_disconnect" },
	{ 0x81cca809, "usbnet_probe" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0x8fa0a11a, "usbnet_tx_timeout" },
	{ 0x2a350210, "usbnet_change_mtu" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x2671ae31, "usbnet_start_xmit" },
	{ 0x6ea456cf, "usbnet_stop" },
	{ 0x67084dce, "usbnet_open" },
	{ 0xec31b930, "usbnet_set_link_ksettings_mii" },
	{ 0x17d6357c, "usbnet_get_link_ksettings_mii" },
	{ 0x4dff8303, "usbnet_get_link" },
	{ 0x4af5c482, "usbnet_nway_reset" },
	{ 0x44bf826e, "usbnet_set_msglevel" },
	{ 0x47617bd5, "usbnet_get_msglevel" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x755667d2, "usbnet_get_endpoints" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8aaa0516, "usbnet_resume" },
	{ 0xda0b7fd5, "usbnet_write_cmd_async" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x392538f8, "usbnet_get_drvinfo" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb65e8b7, "generic_mii_ioctl" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbf75d265, "usbnet_read_cmd" },
	{ 0xf9a482f9, "msleep" },
	{ 0x64495964, "usbnet_write_cmd" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7c1fa7a0, "usbnet_link_change" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x9ecf4732, "skb_trim" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "07924C0ECEBD4F3370EF3DE");
