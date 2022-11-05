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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xdec7b694, "usbnet_disconnect" },
	{ 0x81cca809, "usbnet_probe" },
	{ 0xec31b930, "usbnet_set_link_ksettings_mii" },
	{ 0x17d6357c, "usbnet_get_link_ksettings_mii" },
	{ 0x4dff8303, "usbnet_get_link" },
	{ 0x4af5c482, "usbnet_nway_reset" },
	{ 0x44bf826e, "usbnet_set_msglevel" },
	{ 0x47617bd5, "usbnet_get_msglevel" },
	{ 0x392538f8, "usbnet_get_drvinfo" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0x8fa0a11a, "usbnet_tx_timeout" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0x2671ae31, "usbnet_start_xmit" },
	{ 0x6ea456cf, "usbnet_stop" },
	{ 0x67084dce, "usbnet_open" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xec8ed490, "usbnet_skb_return" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xb7377510, "skb_push" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xdcb707bf, "eth_platform_get_mac_address" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x755667d2, "usbnet_get_endpoints" },
	{ 0x92997ed8, "_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x61c1a3a1, "mii_nway_restart" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0x8aaa0516, "usbnet_resume" },
	{ 0x321fd4fc, "usbnet_suspend" },
	{ 0x2a350210, "usbnet_change_mtu" },
	{ 0x2b238959, "mii_ethtool_gset" },
	{ 0x11193531, "mii_check_media" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfcedf14e, "usbnet_read_cmd_nopm" },
	{ 0xbf75d265, "usbnet_read_cmd" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x457e77f3, "usbnet_write_cmd_nopm" },
	{ 0x64495964, "usbnet_write_cmd" },
	{ 0xbd6841d4, "crc16" },
	{ 0xb65e8b7, "generic_mii_ioctl" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0x25bb7304, "usbnet_defer_kevent" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C8AFA5479F412CCED33A6CC");
