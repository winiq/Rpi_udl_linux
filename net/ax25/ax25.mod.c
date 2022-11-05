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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x6c17b689, "skb_queue_head" },
	{ 0xcdeede81, "release_sock" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x75a97e13, "sock_init_data" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xaa38dcca, "proc_create_seq_private" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0xf4ce22b8, "from_kuid_munged" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xcd5e5ea9, "send_sig" },
	{ 0x72441634, "sock_gettstamp" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x2b3f48c1, "skb_copy" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x9d7b4104, "sock_queue_rcv_skb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb9a02d17, "skb_set_owner_w" },
	{ 0xb91f03d1, "sock_i_ino" },
	{ 0x751d137f, "sock_rfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0x41e2708e, "sock_no_sendpage" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0xad88da9b, "skb_dequeue_tail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0x62a92fb7, "__skb_wait_for_more_packets" },
	{ 0xce18fcef, "skb_copy_datagram_iter" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x543ef284, "seq_hlist_start" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb7377510, "skb_push" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x26509068, "sk_free" },
	{ 0x9181420b, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x82baa22e, "init_net" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3e642ffa, "proto_register" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xca55c602, "make_kuid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7db57172, "datagram_poll" },
	{ 0xcb456a92, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x134074b4, "sock_alloc_send_skb" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xf66193d7, "__dev_get_by_name" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xcb3c163e, "__skb_try_recv_datagram" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x91453ce, "dev_add_pack" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x7510c7fe, "register_net_sysctl" },
	{ 0x1f00d5a5, "skb_expand_head" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xcedd4728, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC25A1448D5B6AE3ECD8BA2");
