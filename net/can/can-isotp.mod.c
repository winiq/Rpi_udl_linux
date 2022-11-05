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
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x72441634, "sock_gettstamp" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xf9b9bf38, "can_proto_unregister" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9d7b4104, "sock_queue_rcv_skb" },
	{ 0x507d8038, "skb_recv_datagram" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x41e2708e, "sock_no_sendpage" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0x4249472a, "sock_efree" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xdcb764ad, "memset" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0xb8aac20c, "__sock_recv_wifi_status" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x26509068, "sk_free" },
	{ 0xc2a1a804, "dev_get_by_index" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd6d87f25, "sock_no_shutdown" },
	{ 0xee507a81, "__sock_recv_timestamp" },
	{ 0x89404895, "can_send" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7db57172, "datagram_poll" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5e91e35, "can_proto_register" },
	{ 0x134074b4, "sock_alloc_send_skb" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x3e3bfa09, "sk_error_report" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x94198759, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x314846f5, "can_rx_unregister" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb48351f8, "_copy_to_iter" },
	{ 0xcedd4728, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "DA5996A2B7F80D4D2BAC2D5");
