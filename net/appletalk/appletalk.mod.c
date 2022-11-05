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
	{ 0xcdeede81, "release_sock" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x38f48af7, "put_user_ifreq" },
	{ 0x75a97e13, "sock_init_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaa38dcca, "proc_create_seq_private" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0xf4ce22b8, "from_kuid_munged" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x72441634, "sock_gettstamp" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x2b3f48c1, "skb_copy" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9d7b4104, "sock_queue_rcv_skb" },
	{ 0x507d8038, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb7e25bd9, "skb_realloc_headroom" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x41e2708e, "sock_no_sendpage" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0x8b2b24a2, "proc_mkdir" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0xce18fcef, "skb_copy_datagram_iter" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0xb7377510, "skb_push" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x26509068, "sk_free" },
	{ 0x9181420b, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x82baa22e, "init_net" },
	{ 0x10f6663, "register_snap_client" },
	{ 0xd6d87f25, "sock_no_shutdown" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3e642ffa, "proto_register" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7db57172, "datagram_poll" },
	{ 0xcb456a92, "sock_register" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x134074b4, "sock_alloc_send_skb" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xf66193d7, "__dev_get_by_name" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x9a1e3c31, "remove_proc_subtree" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xee1efe3d, "unregister_snap_client" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x33fc2a31, "get_user_ifreq" },
	{ 0x91453ce, "dev_add_pack" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x7510c7fe, "register_net_sysctl" },
	{ 0xe22d1723, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xef4feda1, "sock_i_uid" },
	{ 0x6c4b0cb4, "dev_mc_add_global" },
	{ 0xcedd4728, "skb_free_datagram" },
};

MODULE_INFO(depends, "psnap");


MODULE_INFO(srcversion, "F2495D8873595F38A7752F1");
