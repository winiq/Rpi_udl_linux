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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2141aa0a, "can_rx_register" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x72441634, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf9b9bf38, "can_proto_unregister" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9d7b4104, "sock_queue_rcv_skb" },
	{ 0x507d8038, "skb_recv_datagram" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x41e2708e, "sock_no_sendpage" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0xdcb764ad, "memset" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x3df3e07, "sock_recv_errqueue" },
	{ 0xd2c99738, "__kmalloc_track_caller" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0x26509068, "sk_free" },
	{ 0xc2a1a804, "dev_get_by_index" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd6d87f25, "sock_no_shutdown" },
	{ 0x89404895, "can_send" },
	{ 0x6c33d9e7, "__sock_recv_ts_and_drops" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7db57172, "datagram_poll" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5e91e35, "can_proto_register" },
	{ 0x134074b4, "sock_alloc_send_skb" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x3e3bfa09, "sk_error_report" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x94198759, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x314846f5, "can_rx_unregister" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb48351f8, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xcedd4728, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "254BEBA8C27A39202FA6267");
