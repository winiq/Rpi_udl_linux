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
	{ 0x38f48af7, "put_user_ifreq" },
	{ 0x4c96ece8, "dev_load" },
	{ 0x75a97e13, "sock_init_data" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0xb24bdafd, "dev_getbyhwaddr_rcu" },
	{ 0x72441634, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0x54113cf4, "dst_release" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0xdc0815f1, "dev_get_by_name" },
	{ 0xe8643954, "sock_no_getname" },
	{ 0x9d7b4104, "sock_queue_rcv_skb" },
	{ 0x507d8038, "skb_recv_datagram" },
	{ 0x4fdf3088, "sk_common_release" },
	{ 0x7bdbad9e, "sock_common_recvmsg" },
	{ 0x41e2708e, "sock_no_sendpage" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0xd90c34a1, "ieee802154_hdr_pull" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0xce18fcef, "skb_copy_datagram_iter" },
	{ 0xbc40c074, "sock_no_bind" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0x638c7455, "ns_capable" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x143a6904, "sock_prot_inuse_add" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0xb7377510, "skb_push" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xc2a1a804, "dev_get_by_index" },
	{ 0x9181420b, "dev_remove_pack" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x82baa22e, "init_net" },
	{ 0xd6d87f25, "sock_no_shutdown" },
	{ 0x6c33d9e7, "__sock_recv_ts_and_drops" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3e642ffa, "proto_register" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7db57172, "datagram_poll" },
	{ 0xcb456a92, "sock_register" },
	{ 0x69be465b, "dev_getfirstbyhwtype" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x134074b4, "sock_alloc_send_skb" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xd4483c59, "put_cmsg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd510b4a8, "sock_common_setsockopt" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x6715e0ac, "sock_common_getsockopt" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x33fc2a31, "get_user_ifreq" },
	{ 0x91453ce, "dev_add_pack" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xcedd4728, "skb_free_datagram" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "86AF367D82F549E8559C775");
