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
	{ 0x6e18b435, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xb7377510, "skb_push" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x32e1bb4b, "addrconf_prefix_rcv_add_addr" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa11e67a0, "addrconf_add_linklocal" },
	{ 0x77f67a1b, "__ndisc_fill_addr_option" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "B3002667792E99E8556E679");
