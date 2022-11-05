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
	{ 0xe9317d4b, "ipv6_getsockopt" },
	{ 0x3ae1728a, "ipv6_setsockopt" },
	{ 0x729f5d49, "l2tp_ioctl" },
	{ 0x41e2708e, "sock_no_sendpage" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0x7bdbad9e, "sock_common_recvmsg" },
	{ 0xf1c53e26, "inet_sendmsg" },
	{ 0x6715e0ac, "sock_common_getsockopt" },
	{ 0xd510b4a8, "sock_common_setsockopt" },
	{ 0x8da89656, "inet_shutdown" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0x72441634, "sock_gettstamp" },
	{ 0x4c6fac3c, "inet6_compat_ioctl" },
	{ 0xa5c7b0e, "inet6_ioctl" },
	{ 0x7db57172, "datagram_poll" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0xd9789050, "inet_dgram_connect" },
	{ 0x9d69eb85, "inet6_bind" },
	{ 0xb721bcf4, "inet6_release" },
	{ 0x4044b6ed, "inet6_del_protocol" },
	{ 0x912da87a, "inet6_unregister_protosw" },
	{ 0x52b6259e, "inet6_register_protosw" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0xa045041a, "inet6_add_protocol" },
	{ 0x3e642ffa, "proto_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x26509068, "sk_free" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x76fafc53, "__sk_receive_skb" },
	{ 0x3799930f, "__xfrm_policy_check" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xe5b59a36, "l2tp_session_dec_refcount" },
	{ 0x2687cae5, "l2tp_recv_common" },
	{ 0xb8b73d34, "l2tp_session_get" },
	{ 0xfd7b465b, "__fl6_sock_lookup" },
	{ 0x39ee8e39, "ip6_push_pending_frames" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xff6e75e2, "ip6_dst_hoplimit" },
	{ 0x54113cf4, "dst_release" },
	{ 0x6d808133, "ip6_append_data" },
	{ 0xb647cc0f, "ip_generic_getfrag" },
	{ 0x21207e1d, "ip6_dst_lookup_flow" },
	{ 0xf59a8fc2, "security_sk_classify_flow" },
	{ 0x3f2092e3, "fl6_update_dst" },
	{ 0x573b5453, "ipv6_fixup_options" },
	{ 0xaaa9ff94, "fl6_merge_options" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0x5fe0a628, "ip6_datagram_send_ctl" },
	{ 0x4fdf3088, "sk_common_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc569d8e9, "ipv6_chk_addr" },
	{ 0xc4284bd3, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x9d7b4104, "sock_queue_rcv_skb" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x93c767f1, "__ip6_datagram_connect" },
	{ 0x9ff8f074, "__udp_disconnect" },
	{ 0xe485776c, "inet6_destroy_sock" },
	{ 0x31151986, "l2tp_tunnel_delete" },
	{ 0xcdeede81, "release_sock" },
	{ 0xf2b60ff1, "ip6_flush_pending_frames" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0xe87ac5f3, "l2tp_sk_to_tunnel" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb8aac20c, "__sock_recv_wifi_status" },
	{ 0x6be47db1, "ip6_datagram_recv_ctl" },
	{ 0xee507a81, "__sock_recv_timestamp" },
	{ 0x272b48f6, "ipv6_recv_error" },
	{ 0xcedd4728, "skb_free_datagram" },
	{ 0xce18fcef, "skb_copy_datagram_iter" },
	{ 0x507d8038, "skb_recv_datagram" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "ipv6,l2tp_ip,l2tp_core");


MODULE_INFO(srcversion, "24268C1612F2D1FA43BAF05");
