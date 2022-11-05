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
	{ 0x41e2708e, "sock_no_sendpage" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0xd6d87f25, "sock_no_shutdown" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0x7f871508, "sock_no_ioctl" },
	{ 0x7db57172, "datagram_poll" },
	{ 0xe8643954, "sock_no_getname" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0x94198759, "sock_no_connect" },
	{ 0xbc40c074, "sock_no_bind" },
	{ 0x82c290fa, "xfrm_register_km" },
	{ 0xcb456a92, "sock_register" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x3e642ffa, "proto_register" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xf29677a7, "xfrm_unregister_km" },
	{ 0x6f738b36, "xfrm_alloc_spi" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0xd5c2e709, "xfrm_find_acq" },
	{ 0x947d22ed, "xfrm_audit_policy_add" },
	{ 0xe2f14442, "xfrm_policy_insert" },
	{ 0xfa9eeb4b, "xfrm_policy_alloc" },
	{ 0x774ffc7d, "xfrm_policy_bysel_ctx" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x112fc726, "xfrm_find_acq_byseq" },
	{ 0xbc90d221, "xfrm_state_delete" },
	{ 0x14562e65, "xfrm_audit_state_delete" },
	{ 0x26509068, "sk_free" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x75a97e13, "sock_init_data" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0x638c7455, "ns_capable" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0x56bef7bc, "xfrm_audit_policy_delete" },
	{ 0x27ab7df1, "xfrm_policy_destroy" },
	{ 0x4ca1179, "xfrm_policy_byid" },
	{ 0x72395dc1, "xfrm_calg_get_byid" },
	{ 0x5c699441, "xfrm_aalg_get_byid" },
	{ 0x3adb8973, "xfrm_state_add" },
	{ 0x85f04548, "__xfrm_state_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x22f0899e, "xfrm_audit_state_add" },
	{ 0x1a3c4ef4, "xfrm_state_update" },
	{ 0x4ba26e1a, "xfrm_init_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc80741, "xfrm_ealg_get_byid" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x490173ad, "xfrm_state_alloc" },
	{ 0x7a8ca627, "xfrm_count_pfkey_enc_supported" },
	{ 0xa575945, "xfrm_count_pfkey_auth_supported" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0x2b3f48c1, "skb_copy" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x6c33d9e7, "__sock_recv_ts_and_drops" },
	{ 0xcedd4728, "skb_free_datagram" },
	{ 0xce18fcef, "skb_copy_datagram_iter" },
	{ 0x507d8038, "skb_recv_datagram" },
	{ 0xb73be794, "xfrm_ealg_get_byidx" },
	{ 0xc6b1fdbe, "xfrm_aalg_get_byidx" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0x4dc86d46, "km_state_notify" },
	{ 0x3a20c566, "xfrm_state_flush" },
	{ 0x157d17cb, "km_policy_notify" },
	{ 0x5a6bcac1, "xfrm_policy_flush" },
	{ 0x92997ed8, "_printk" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0x751d137f, "sock_rfree" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x672e6ca3, "xfrm_state_lookup" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xe22d1723, "skb_put" },
	{ 0x1e9edfb7, "seq_hlist_start_head_rcu" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xb91f03d1, "sock_i_ino" },
	{ 0xf4ce22b8, "from_kuid_munged" },
	{ 0xef4feda1, "sock_i_uid" },
	{ 0x6059e087, "proc_create_net_data" },
	{ 0x6f644f8e, "xfrm_state_walk" },
	{ 0x31151ba, "xfrm_state_walk_done" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x53ea2965, "xfrm_policy_walk_done" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0xe148926, "xfrm_policy_walk" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "C4F59CEA956C3E82ADAF9D0");
