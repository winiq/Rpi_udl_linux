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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2141aa0a, "can_rx_register" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0xbedb1058, "_proc_mkdir" },
	{ 0x72441634, "sock_gettstamp" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xf9b9bf38, "can_proto_unregister" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0xdd3bf30b, "proc_create_net_single" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe8643954, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x9d7b4104, "sock_queue_rcv_skb" },
	{ 0x507d8038, "skb_recv_datagram" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb91f03d1, "sock_i_ino" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x41e2708e, "sock_no_sendpage" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0x179b6ebe, "PDE_DATA" },
	{ 0x4249472a, "sock_efree" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xdcb764ad, "memset" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0xbc40c074, "sock_no_bind" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0x8b8222b7, "seq_putc" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xc4284bd3, "dev_get_by_index_rcu" },
	{ 0x26509068, "sk_free" },
	{ 0xc2a1a804, "dev_get_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd6d87f25, "sock_no_shutdown" },
	{ 0x89404895, "can_send" },
	{ 0x6c33d9e7, "__sock_recv_ts_and_drops" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7db57172, "datagram_poll" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5e91e35, "can_proto_register" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x3e3bfa09, "sk_error_report" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x314846f5, "can_rx_unregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb48351f8, "_copy_to_iter" },
	{ 0xe914e41e, "strcpy" },
	{ 0xcedd4728, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "D77FE66956E87E239D60C61");
