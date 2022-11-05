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
	{ 0x8aaa0516, "usbnet_resume" },
	{ 0x321fd4fc, "usbnet_suspend" },
	{ 0xdec7b694, "usbnet_disconnect" },
	{ 0xec31b930, "usbnet_set_link_ksettings_mii" },
	{ 0x17d6357c, "usbnet_get_link_ksettings_mii" },
	{ 0x4af5c482, "usbnet_nway_reset" },
	{ 0x44bf826e, "usbnet_set_msglevel" },
	{ 0x47617bd5, "usbnet_get_msglevel" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0x8fa0a11a, "usbnet_tx_timeout" },
	{ 0x2a350210, "usbnet_change_mtu" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0x2671ae31, "usbnet_start_xmit" },
	{ 0x6ea456cf, "usbnet_stop" },
	{ 0x67084dce, "usbnet_open" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x7c1fa7a0, "usbnet_link_change" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xb7377510, "skb_push" },
	{ 0xc8774034, "usbnet_status_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb9a740f4, "usbnet_status_start" },
	{ 0x81cca809, "usbnet_probe" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x64495964, "usbnet_write_cmd" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xec8ed490, "usbnet_skb_return" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x37a0cba, "kfree" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbf75d265, "usbnet_read_cmd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x755667d2, "usbnet_get_endpoints" },
	{ 0x5792f848, "strlcpy" },
	{ 0x392538f8, "usbnet_get_drvinfo" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "5ECAFBE196619EDC285A4CE");
