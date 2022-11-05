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
	{ 0xe5b59a36, "l2tp_session_dec_refcount" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0xdee01bc4, "ip_getsockopt" },
	{ 0xfa73eab4, "ip_setsockopt" },
	{ 0x8001c0d4, "sk_setup_caps" },
	{ 0x72441634, "sock_gettstamp" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0x54113cf4, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2687cae5, "l2tp_recv_common" },
	{ 0x9d7b4104, "sock_queue_rcv_skb" },
	{ 0x507d8038, "skb_recv_datagram" },
	{ 0xf1c53e26, "inet_sendmsg" },
	{ 0xd575022a, "inet_del_protocol" },
	{ 0x4fdf3088, "sk_common_release" },
	{ 0xd9789050, "inet_dgram_connect" },
	{ 0x7bdbad9e, "sock_common_recvmsg" },
	{ 0x41e2708e, "sock_no_sendpage" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0xb8aac20c, "__sock_recv_wifi_status" },
	{ 0xce18fcef, "skb_copy_datagram_iter" },
	{ 0xf59a8fc2, "security_sk_classify_flow" },
	{ 0xce97b13d, "inet_addr_type" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x26509068, "sk_free" },
	{ 0x8da89656, "inet_shutdown" },
	{ 0x87011638, "inet_add_protocol" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xee507a81, "__sock_recv_timestamp" },
	{ 0xf47d49c1, "inet_ioctl" },
	{ 0x76fafc53, "__sk_receive_skb" },
	{ 0x77fbc760, "ip_cmsg_recv_offset" },
	{ 0x3e642ffa, "proto_register" },
	{ 0xe6f01d42, "__sk_dst_check" },
	{ 0xf2322db, "inet_release" },
	{ 0xca55c602, "make_kuid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7db57172, "datagram_poll" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x87404e2a, "ip_route_output_flow" },
	{ 0xd510b4a8, "sock_common_setsockopt" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x3799930f, "__xfrm_policy_check" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x9f7c7f8a, "inet_register_protosw" },
	{ 0x9ff8f074, "__udp_disconnect" },
	{ 0x31151986, "l2tp_tunnel_delete" },
	{ 0xf14123a0, "inet_bind" },
	{ 0x6715e0ac, "sock_common_getsockopt" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x6860c7a8, "__ip4_datagram_connect" },
	{ 0x8d7024e9, "sock_wmalloc" },
	{ 0xb8b73d34, "l2tp_session_get" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0x412a95f5, "ip_queue_xmit" },
	{ 0xe87ac5f3, "l2tp_sk_to_tunnel" },
	{ 0x97d8dd5d, "inet_unregister_protosw" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcedd4728, "skb_free_datagram" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "D172510D2E6796E9296EB36");
