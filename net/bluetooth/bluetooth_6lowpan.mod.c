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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xa0da43d4, "l2cap_chan_set_defaults" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x5dc00640, "single_open" },
	{ 0x416e5db, "single_release" },
	{ 0x88279a38, "l2cap_chan_del" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x2b3f48c1, "skb_copy" },
	{ 0x2e619f2d, "lowpan_header_compress" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2e7909f9, "l2cap_chan_send" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2dec9f4e, "neigh_destroy" },
	{ 0x39e9ace0, "l2cap_add_psm" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xbd19b5, "seq_read" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x2b8aa179, "l2cap_chan_close" },
	{ 0x718b8b7, "bt_info" },
	{ 0x8409995a, "hci_get_route" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0xeb30dce2, "l2cap_chan_put" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x74341544, "iov_iter_kvec" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7f8095, "dev_close" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x80365c66, "nd_tbl" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdd860064, "simple_attr_release" },
	{ 0x9cce4bf6, "debugfs_create_file_unsafe" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x3cc5fd2c, "debugfs_attr_read" },
	{ 0x4b7eded8, "dev_open" },
	{ 0x2fb7f234, "lowpan_header_decompress" },
	{ 0x6587c97e, "module_put" },
	{ 0xb0b91e01, "skb_copy_expand" },
	{ 0x8ea8d1f5, "lowpan_unregister_netdev" },
	{ 0x4bc4f888, "bt_debugfs" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x2884d4ea, "l2cap_chan_connect" },
	{ 0xbde7e4a, "netdev_notify_peers" },
	{ 0x7b70a5ca, "lowpan_register_netdev" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x21f3f279, "l2cap_chan_create" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x76072819, "debugfs_attr_write" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc0b4422b, "simple_attr_open" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x3f9f7d3b, "try_module_get" },
};

MODULE_INFO(depends, "bluetooth,6lowpan,ipv6");


MODULE_INFO(srcversion, "E281B6E582C7A08D9789FF4");
