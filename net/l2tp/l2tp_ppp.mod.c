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
	{ 0x2973900, "sock_no_mmap" },
	{ 0xd6d87f25, "sock_no_shutdown" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0x4cf0270d, "pppox_compat_ioctl" },
	{ 0xe083f161, "pppox_ioctl" },
	{ 0x7db57172, "datagram_poll" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0xbc40c074, "sock_no_bind" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xacaca0db, "unregister_pernet_device" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x27c801d9, "l2tp_nl_register_ops" },
	{ 0x8bd5ff9e, "register_pppox_proto" },
	{ 0x3e642ffa, "proto_register" },
	{ 0x737cac7a, "register_pernet_device" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x922aaee8, "pppox_unbind_sock" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0xe22d1723, "skb_put" },
	{ 0x8d7024e9, "sock_wmalloc" },
	{ 0x4a0caa5a, "l2tp_session_set_header_len" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdcb764ad, "memset" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe6be485b, "l2tp_xmit_skb" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x9453af2a, "ppp_dev_name" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x92997ed8, "_printk" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x9d7b4104, "sock_queue_rcv_skb" },
	{ 0xc3e795ff, "ppp_input" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x26509068, "sk_free" },
	{ 0x67eb60fe, "l2tp_session_get_nth" },
	{ 0xdf848bdb, "l2tp_tunnel_get_nth" },
	{ 0xe9f81aa1, "l2tp_session_delete" },
	{ 0x5646e531, "ppp_register_net_channel" },
	{ 0x54113cf4, "dst_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x33ae33fd, "l2tp_session_inc_refcount" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x31151986, "l2tp_tunnel_delete" },
	{ 0x987d294b, "l2tp_tunnel_get_session" },
	{ 0x8c24b4be, "l2tp_tunnel_register" },
	{ 0x63282bcd, "l2tp_tunnel_inc_refcount" },
	{ 0x5a048275, "l2tp_tunnel_create" },
	{ 0xd5a87f49, "l2tp_tunnel_get" },
	{ 0xcdeede81, "release_sock" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0xa390a9fb, "l2tp_tunnel_dec_refcount" },
	{ 0x6059e087, "proc_create_net_data" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xce18fcef, "skb_copy_datagram_iter" },
	{ 0x507d8038, "skb_recv_datagram" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xbb92ed6b, "l2tp_udp_encap_recv" },
	{ 0xe5b59a36, "l2tp_session_dec_refcount" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0x75a97e13, "sock_init_data" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xf167b5c3, "l2tp_session_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd5366728, "l2tp_session_create" },
};

MODULE_INFO(depends, "pppox,l2tp_netlink,l2tp_core,ppp_generic");


MODULE_INFO(srcversion, "AE00F1660DE5F8B741CF374");
