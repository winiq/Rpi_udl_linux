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
	{ 0x5ba36750, "ethtool_op_get_link" },
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
	{ 0x8aaa0516, "usbnet_resume" },
	{ 0x321fd4fc, "usbnet_suspend" },
	{ 0xfcedf14e, "usbnet_read_cmd_nopm" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0xc2469bb6, "usb_autopm_put_interface" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1406e56c, "usb_driver_set_configuration" },
	{ 0x37a0cba, "kfree" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x755667d2, "usbnet_get_endpoints" },
	{ 0x5d7062fb, "usb_reset_configuration" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x392538f8, "usbnet_get_drvinfo" },
	{ 0x25bb7304, "usbnet_defer_kevent" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0xbf75d265, "usbnet_read_cmd" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xda0b7fd5, "usbnet_write_cmd_async" },
	{ 0xec8ed490, "usbnet_skb_return" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xdcb764ad, "memset" },
	{ 0xe22d1723, "skb_put" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xb0b91e01, "skb_copy_expand" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xb7377510, "skb_push" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "00405A31963E7DC18CE88E2");
