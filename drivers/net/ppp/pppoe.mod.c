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
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x9181420b, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xacaca0db, "unregister_pernet_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x91453ce, "dev_add_pack" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0x8bd5ff9e, "register_pppox_proto" },
	{ 0x3e642ffa, "proto_register" },
	{ 0x737cac7a, "register_pernet_device" },
	{ 0x5646e531, "ppp_register_net_channel" },
	{ 0xdc0815f1, "dev_get_by_name" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xc3e795ff, "ppp_input" },
	{ 0x9d7b4104, "sock_queue_rcv_skb" },
	{ 0xdcb764ad, "memset" },
	{ 0xa04c2db7, "dev_get_by_name_rcu" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x922aaee8, "pppox_unbind_sock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x76fafc53, "__sk_receive_skb" },
	{ 0x8cb305ff, "pskb_trim_rcsum_slow" },
	{ 0x5240024d, "skb_pull_rcsum" },
	{ 0x26509068, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x6059e087, "proc_create_net_data" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0xcdeede81, "release_sock" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0xe22d1723, "skb_put" },
	{ 0x8d7024e9, "sock_wmalloc" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xce18fcef, "skb_copy_datagram_iter" },
	{ 0x507d8038, "skb_recv_datagram" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x75a97e13, "sock_init_data" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
};

MODULE_INFO(depends, "pppox,ppp_generic");


MODULE_INFO(srcversion, "47376A06A487CF4CC62EF5E");
