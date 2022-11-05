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
	{ 0x6c70a71c, "netdev_info" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x2b238959, "mii_ethtool_gset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf00942fa, "phy_disconnect" },
	{ 0x8aaa0516, "usbnet_resume" },
	{ 0x1c27b1c4, "phy_do_ioctl_running" },
	{ 0x8e6b1a9e, "net_selftest_get_count" },
	{ 0x41efd7dc, "phy_stop" },
	{ 0x81cca809, "usbnet_probe" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x92141602, "__devm_mdiobus_register" },
	{ 0x7c1fa7a0, "usbnet_link_change" },
	{ 0x2d1223db, "__mdiobus_register" },
	{ 0xd8ffcdff, "phy_ethtool_nway_reset" },
	{ 0xdec7b694, "usbnet_disconnect" },
	{ 0xb65e8b7, "generic_mii_ioctl" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6ea456cf, "usbnet_stop" },
	{ 0xd5212df2, "usbnet_update_max_qlen" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x68efca98, "mdiobus_unregister" },
	{ 0x79bcc76d, "net_selftest" },
	{ 0x3e4cd7e5, "devm_mdiobus_alloc_size" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0x693e69c0, "phy_print_status" },
	{ 0x4af5c482, "usbnet_nway_reset" },
	{ 0xeb824649, "phy_start" },
	{ 0x61c1a3a1, "mii_nway_restart" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xdcb707bf, "eth_platform_get_mac_address" },
	{ 0x592eb6e5, "mdiobus_free" },
	{ 0x755667d2, "usbnet_get_endpoints" },
	{ 0x5792f848, "strlcpy" },
	{ 0x392538f8, "usbnet_get_drvinfo" },
	{ 0xb7377510, "skb_push" },
	{ 0xfcedf14e, "usbnet_read_cmd_nopm" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x2671ae31, "usbnet_start_xmit" },
	{ 0x321fd4fc, "usbnet_suspend" },
	{ 0xc9aceb3f, "phy_suspend" },
	{ 0x4dff8303, "usbnet_get_link" },
	{ 0x457e77f3, "usbnet_write_cmd_nopm" },
	{ 0x2dccf961, "phy_ethtool_get_link_ksettings" },
	{ 0xb0b91e01, "skb_copy_expand" },
	{ 0xbf75d265, "usbnet_read_cmd" },
	{ 0x17d6357c, "usbnet_get_link_ksettings_mii" },
	{ 0x8fa0a11a, "usbnet_tx_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2a74e457, "genphy_resume" },
	{ 0xec8ed490, "usbnet_skb_return" },
	{ 0x67084dce, "usbnet_open" },
	{ 0x11193531, "mii_check_media" },
	{ 0x47617bd5, "usbnet_get_msglevel" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xec31b930, "usbnet_set_link_ksettings_mii" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xbca4cb45, "usbnet_unlink_rx_urbs" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x58ba63fd, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x23e57e94, "phy_attached_info" },
	{ 0xc090c376, "net_selftest_get_strings" },
	{ 0xda0b7fd5, "usbnet_write_cmd_async" },
	{ 0x2a350210, "usbnet_change_mtu" },
	{ 0x350b3d41, "phy_connect" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc990bd43, "mii_link_ok" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe22d1723, "skb_put" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0x64495964, "usbnet_write_cmd" },
	{ 0x44bf826e, "usbnet_set_msglevel" },
	{ 0x8a31eb04, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7748BDD69C7C3868BACAC1E");
