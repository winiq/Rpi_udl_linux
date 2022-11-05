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
	{ 0x6f644f8e, "xfrm_state_walk" },
	{ 0xbc90d221, "xfrm_state_delete" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x112fc726, "xfrm_find_acq_byseq" },
	{ 0x337be4b0, "netlink_has_listeners" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe2f14442, "xfrm_policy_insert" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x1a3c4ef4, "xfrm_state_update" },
	{ 0x157d17cb, "km_policy_notify" },
	{ 0xebeab9ab, "xfrm_state_lookup_byaddr" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xba7dfb03, "xfrm_policy_hash_rebuild" },
	{ 0xe148926, "xfrm_policy_walk" },
	{ 0x73e85989, "km_state_expired" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8d2ef3ca, "xfrm_state_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5870e3ee, "xfrm_policy_delete" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x5a6bcac1, "xfrm_policy_flush" },
	{ 0x22f0899e, "xfrm_audit_state_add" },
	{ 0x249d81c9, "xfrm_sad_getinfo" },
	{ 0xdcb764ad, "memset" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x53ea2965, "xfrm_policy_walk_done" },
	{ 0x4b24c57c, "netlink_kernel_release" },
	{ 0x912739d8, "__xfrm_state_delete" },
	{ 0xa47aaf4e, "netlink_rcv_skb" },
	{ 0x9166fada, "strncpy" },
	{ 0xd367601c, "nla_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x8ca457a, "netlink_unicast" },
	{ 0x4dc86d46, "km_state_notify" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x82c290fa, "xfrm_register_km" },
	{ 0x710d5ccd, "km_query" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x6f738b36, "xfrm_alloc_spi" },
	{ 0x6f0119da, "km_policy_expired" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x16d837c9, "__xfrm_init_state" },
	{ 0x91f4d6a1, "security_locked_down" },
	{ 0x3a20c566, "xfrm_state_flush" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xf29677a7, "xfrm_unregister_km" },
	{ 0xeea50d0c, "netlink_broadcast" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x27ab7df1, "xfrm_policy_destroy" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0xfa6427d8, "xfrm_dev_state_add" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0x56bef7bc, "xfrm_audit_policy_delete" },
	{ 0xb01bebf9, "xfrm_get_acqseq" },
	{ 0x49ca83, "xfrm_aead_get_byname" },
	{ 0x85f04548, "__xfrm_state_destroy" },
	{ 0x774ffc7d, "xfrm_policy_bysel_ctx" },
	{ 0xfa9eeb4b, "xfrm_policy_alloc" },
	{ 0x14562e65, "xfrm_audit_state_delete" },
	{ 0x6c1b521f, "__netlink_kernel_create" },
	{ 0x3adb8973, "xfrm_state_add" },
	{ 0x947d22ed, "xfrm_audit_policy_add" },
	{ 0x672e6ca3, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xffd19318, "xfrm_init_replay" },
	{ 0x1780b927, "__fib6_flush_trees" },
	{ 0x4ca1179, "xfrm_policy_byid" },
	{ 0xd5c2e709, "xfrm_find_acq" },
	{ 0x31151ba, "xfrm_state_walk_done" },
	{ 0x8b234d0a, "nla_put_64bit" },
	{ 0x8faa70ae, "nla_reserve" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0x490173ad, "xfrm_state_alloc" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcbdda75c, "__netlink_dump_start" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd27b9103, "xfrm_spd_getinfo" },
	{ 0x11e2af69, "netlink_net_capable" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "71C5CC7638F46142E02D10E");
