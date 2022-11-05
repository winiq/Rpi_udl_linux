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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9181420b, "dev_remove_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x91453ce, "dev_add_pack" },
	{ 0xaa38dcca, "proc_create_seq_private" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x6e18b435, "register_netdevice" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x7f8095, "dev_close" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x92997ed8, "_printk" },
	{ 0xc68f0827, "ax25_ip_xmit" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0xb7377510, "skb_push" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x82baa22e, "init_net" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x96068ceb, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "A442020479330985F1B675C");
