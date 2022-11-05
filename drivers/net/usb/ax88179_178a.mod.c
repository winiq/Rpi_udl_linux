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
	{ 0xdec7b694, "usbnet_disconnect" },
	{ 0x81cca809, "usbnet_probe" },
	{ 0xc0f38e3d, "ethtool_op_get_ts_info" },
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0x4af5c482, "usbnet_nway_reset" },
	{ 0x44bf826e, "usbnet_set_msglevel" },
	{ 0x47617bd5, "usbnet_get_msglevel" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0x8fa0a11a, "usbnet_tx_timeout" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x2671ae31, "usbnet_start_xmit" },
	{ 0x6ea456cf, "usbnet_stop" },
	{ 0x67084dce, "usbnet_open" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0x2b238959, "mii_ethtool_gset" },
	{ 0x755667d2, "usbnet_get_endpoints" },
	{ 0x61c1a3a1, "mii_nway_restart" },
	{ 0x321fd4fc, "usbnet_suspend" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xda0b7fd5, "usbnet_write_cmd_async" },
	{ 0x8aaa0516, "usbnet_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7c1fa7a0, "usbnet_link_change" },
	{ 0xd5212df2, "usbnet_update_max_qlen" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0xdcb707bf, "eth_platform_get_mac_address" },
	{ 0x64495964, "usbnet_write_cmd" },
	{ 0x457e77f3, "usbnet_write_cmd_nopm" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0xbf75d265, "usbnet_read_cmd" },
	{ 0xfcedf14e, "usbnet_read_cmd_nopm" },
	{ 0xb65e8b7, "generic_mii_ioctl" },
	{ 0x61e69a3d, "mii_ethtool_get_link_ksettings" },
	{ 0x9ae0baca, "mii_ethtool_set_link_ksettings" },
	{ 0xec8ed490, "usbnet_skb_return" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xb7377510, "skb_push" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x8da6585d, "__stack_chk_fail" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0179d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6C1FCF063025567E7E0CF65");
